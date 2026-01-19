# Documentação Samba AD DC (Versão 1.0.9) - Void Linux

Este guia documenta a configuração de um **Domain Controller** utilizando Samba instalado em `/opt/samba`, com gerenciamento via `runit` e integração total ao sistema operacional.

## 1. Estrutura do Serviço Runit
O serviço foi criado em `/etc/sv/samba-ad-dc`.

### Script de Execução (/etc/sv/samba-ad-dc/run)
Este script prepara o ambiente e resolve erros de diretórios inexistentes antes de iniciar o Samba.

```bash
#!/bin/sh

# 1. Preparação da estrutura exigida pelo binário em /opt
mkdir -p /opt/samba/var/locks/winbindd_privileged
mkdir -p /opt/samba/var/lib/ntp_signd
mkdir -p /opt/samba/var/run
mkdir -p /run/samba

# 2. Ajuste de permissões vitais para Sockets e Pipes
chown -R root:root /opt/samba/var/locks/winbindd_privileged
chmod 750 /opt/samba/var/locks/winbindd_privileged
chown -R root:root /opt/samba/var/lib/ntp_signd
chmod 750 /opt/samba/var/lib/ntp_signd

# 3. Link simbólico para compatibilidade com ferramentas do sistema
if [ ! -L /var/lib/samba/winbindd_privileged ]; then
    mkdir -p /var/lib/samba
    ln -sf /opt/samba/var/locks/winbindd_privileged /var/lib/samba/winbindd_privileged
fi

# 4. Execução do Samba (Foreground + Debug Level 3)
exec /opt/samba/sbin/samba -i -M single --debuglevel=3 2>&1
```

### Script de Log (/etc/sv/samba-ad-dc/log/run)
```bash
#!/bin/sh
mkdir -p /var/log/samba-ad-dc
exec svlogd -tt /var/log/samba-ad-dc
```

---

## 2. Integração com o Sistema (NSS & PAM)

### Links das Bibliotecas
Necessário para que o Void Linux carregue os módulos que estão em `/opt`.
```bash
# NSS
sudo ln -sf /opt/samba/lib/libnss_winbind.so.2 /usr/lib/libnss_winbind.so.2
sudo ln -sf /usr/lib/libnss_winbind.so.2 /usr/lib/libnss_winbind.so

# PAM
sudo mkdir -p /usr/lib/security
sudo ln -sf /opt/samba/lib/security/pam_winbind.so /usr/lib/security/pam_winbind.so

# Atualizar cache
sudo ldconfig
```

### Configurações de Arquivos
No `/etc/nsswitch.conf`:
```text
passwd: files winbind
group:  files winbind
```

No `/etc/pam.d/system-auth`:
```text
auth      sufficient  pam_winbind.so
auth      required    pam_unix.so try_first_pass
account   sufficient  pam_winbind.so
account   required    pam_unix.so
session   required    pam_mkhomedir.so skel=/etc/skel umask=0022
```

---

## 3. Configurações do Samba (/opt/samba/etc/smb.conf)
```ini
[global]
    template shell = /bin/bash
    template homedir = /home/%D/%U
```

---

## 4. Testes e Resultados Esperados

### Teste 1: Comunicação Winbind
**Comando:** `wbinfo -p`  
**Resultado Esperado:** `Ping to winbindd succeeded`

### Teste 2: Resolução de Usuário pelo OS
**Comando:** `getent passwd Administrator`  
**Resultado Esperado:** `TURBONET\administrator:*:0:100::/home/TURBONET/administrator:/bin/bash`

### Teste 3: Criação de Home e Autenticação
**Comando:** `su - Administrator`  
**Resultado Esperado:** O sistema deve solicitar a senha do AD, criar o diretório `/home/TURBONET/administrator` e logar com sucesso no shell bash.

---

## 5. Manutenção
* **Logs:** `tail -f /var/log/samba-ad-dc/current`
* **Reiniciar:** `sv restart samba-ad-dc`

# Documentação Samba AD DC (Versão 1.0.9) - Void Linux

Este guia documenta a configuração de um **Domain Controller** utilizando Samba instalado em `/opt/samba`, com gerenciamento via `runit`.

## 1. Estrutura do Serviço Runit
O serviço foi criado em `/etc/sv/samba-ad-dc`.

### Script de Execução (/etc/sv/samba-ad-dc/run)
Este script garante que os diretórios necessários sejam criados antes do binário iniciar.

```bash
#!/bin/sh

# 1. Preparação da estrutura exigida pelo binário em /opt
mkdir -p /opt/samba/var/locks/winbindd_privileged
mkdir -p /opt/samba/var/lib/ntp_signd
mkdir -p /opt/samba/var/run
mkdir -p /run/samba

# 2. Ajuste de permissões vitais
chown -R root:root /opt/samba/var/locks/winbindd_privileged
chmod 750 /opt/samba/var/locks/winbindd_privileged
chown -R root:root /opt/samba/var/lib/ntp_signd
chmod 750 /opt/samba/var/lib/ntp_signd

# 3. Link simbólico para compatibilidade (ferramentas do sistema como wbinfo)
if [ ! -L /var/lib/samba/winbindd_privileged ]; then
    mkdir -p /var/lib/samba
    ln -sf /opt/samba/var/locks/winbindd_privileged /var/lib/samba/winbindd_privileged
fi

# 4. Execução do binário
exec /opt/samba/sbin/samba -i -M single --debuglevel=3 2>&1
```

### Script de Log (/etc/sv/samba-ad-dc/log/run)
```bash
#!/bin/sh
mkdir -p /var/log/samba-ad-dc
exec svlogd -tt /var/log/samba-ad-dc
```

---

## 2. Integração com o Sistema Operacional (NSS & PAM)

### Links das Bibliotecas
```bash
# NSS (Resolução de nomes)
sudo ln -sf /opt/samba/lib/libnss_winbind.so.2 /usr/lib/libnss_winbind.so.2
sudo ln -sf /usr/lib/libnss_winbind.so.2 /usr/lib/libnss_winbind.so

# PAM (Autenticação)
sudo mkdir -p /usr/lib/security
sudo ln -sf /opt/samba/lib/security/pam_winbind.so /usr/lib/security/pam_winbind.so

# Atualizar cache do sistema
sudo ldconfig
```

### Configuração do /etc/nsswitch.conf
```text
passwd: files winbind
group:  files winbind
shadow: files
hosts:  files dns
```

---

## 3. Configurações do Samba (/opt/samba/etc/smb.conf)

Adicione na seção [global]:

```ini
[global]
    template shell = /bin/bash
    template homedir = /home/%D/%U
```

---

## 4. Comandos de Manutenção

* **Verificar Logs:** tail -f /var/log/samba-ad-dc/current
* **Testar Winbind:** wbinfo -p
* **Verificar Usuário:** getent passwd Administrator
* **Reiniciar Serviço:** sv restart samba-ad-dc

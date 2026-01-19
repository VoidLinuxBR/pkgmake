## 6. Listagem de Domínios e Servidores

### Listar Domínios Conhecidos
Este comando mostra todos os domínios que o seu servidor consegue enxergar ou que possuem relação de confiança.
**Comando:** `/opt/samba/bin/wbinfo --list-all-domains`

### Listar Servidores (Domain Controllers) do Domínio
Para listar os DCs ativos no domínio atual.
**Comando:** `/opt/samba/bin/samba-tool domain dcpromo list` (Se rodar local no DC)
ou
**Comando:** `/opt/samba/bin/net ads workgroup` (Mostra o grupo de trabalho e o servidor logado)

### Localizar o DC via DNS
Como o Samba AD depende do DNS, você pode listar os servidores registrados via consulta:
**Comando:** `host -t SRV _ldap._tcp.seu-dominio.lan`

### Listar Computadores e Servidores no AD
Para listar todas as contas de máquina (servidores e workstations) registradas no banco do AD:
**Comando:** `/opt/samba/bin/samba-tool computer list`

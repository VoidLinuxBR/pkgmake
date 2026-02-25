pkgmake — utilitário de build para pacotes XBPS
==============================================

DESCRIÇÃO
---------
**pkgmake** é uma ferramenta estilo *makepkg* para **Void Linux / XBPS**.

Ela automatiza o processo de:
- build
- empacotamento
- instalação opcional
- assinatura de pacotes
- gerenciamento de repositório local

O funcionamento é **totalmente controlado por flags**.  

FUNCIONALIDADES
----------------
O pkgmake pode:

- Resolver e instalar dependências (`depends` e `makedepends`)
- Executar build e empacotamento a partir de um `PKGFILE`
- Criar pacotes `.xbps`
- Instalar o pacote gerado (opcional)
- Assinar pacotes ou repositórios
- Gerenciar diretório de saída dos pacotes
- Operar de forma silenciosa ou verbosa

DOWNLOAD E INSTALAÇÃO
---------------------

### 1. Via git clone

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/pkgmake.git

# entre no diretório
cd pkgmake

# Instale via Makefile
sudo make install
```

Instala por padrão:
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` (se não existir)

Remoção:

```bash
sudo make uninstall
```

### 2. Via wget ou curl (instalação direta)

Instalação rápida executando o script diretamente do GitHub.

#### Usando curl
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/pkgmake/main/install.sh | sudo bash
```

#### Usando wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/pkgmake/main/install.sh | sudo bash
```

Este método:
- não requer git
- instala os mesmos arquivos do método via Makefile
- **não sobrescreve** configurações existentes
- cria `/etc/pkgmake.conf.new` quando necessário

### 3. Instalação via repositório XBPS (recomendado)

O **pkgmake** também está disponível como pacote em repositório XBPS.

Este é o método **recomendado**, pois permite atualização automática
e integração total com o sistema.

#### Adicionar o repositório

Crie o arquivo de repositório:

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

Atualize os índices:

```sh
sudo xbps-install -S
```

Instale o pacote:

```sh
sudo xbps-install pkgmake
```

Após a instalação, o comando `pkgmake` estará disponível em `/usr/bin/pkgmake`.

Este método:
- integra com o sistema de pacotes do Void Linux
- permite atualizações via `xbps-install -Su`
- não requer scripts externos ou instalação manual

### 4. Execução manual do instalador (alternativa)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

USO
---
```
pkgmake — utilitário de build para pacotes Void XBPS
  Copyright (c) 2019-2025, ChiliLinux Development Team <https://chililinux.com> <https://github.com/chililimux>
  Copyright (c) 2025-2025, VoidLinuxBR Development Team <https://www.youtube.com/@voidlinuxbr <https://github.com/voidlinuxbr> <https://t.me/VoidLinuxBrasil>
  Copyright (c) 2019-2025, Vilmar Catafesta <vcatafesta@gmail.com> <https://github.com/vcatafesta>

Uso:
  pkgmake [opções]

Opções:
  -s, --syncdeps                   Instalar depends e makedepends
  -i, --install                    Instalar pacote após o build
  -f, --force                      Forçar reinstalação do pacote
  -q, --quiet                      Silenciar saída dos comandos
  -v, --verbose                    Mostrar saída dos comandos
      --gen-key                    Gerar chave RSA 4096 em formato PEM
      --privkey <path>             Caminho da chave privada PEM (autodetecta se omitido)
      --sign                       Assinar o pacote recém-construído após o build
      --sign-only                  Assinar pacotes do repositório local (sem build)
      --reindex                    Atualizar o índice do repositório local após o build
      --reindex-only               Recriar o índice do repositório local e sair
      --reindex-all                Assinar todos os pacotes e recriar o índice do repositório local e sair
  -c|--clean                       Limpar diretórios de trabalho
  -p|--print-config                Imprimir configuracao do /etc/pkgmake.conf
  -k|--pkgdest <path>              Diretório local onde os pacotes (.xbps) e o repodata serão gerados
  new <pacote>                     Criar esqueleto básico de PKGFILE
  new --from-arch <pacote>         Importar PKGBUILD do Arch/AUR (requer revisão manual)
  new --from-voidlinuxbr <pacote>  Importar template de pacote da Comunidade VoidLinuxBR (requer revisão manual)
  new --from-void <pacote>         Importar template de pacote do Void Linux (requer revisão manual)
  new --from-venom <pacote>        Importar template de pacote do Venom Linux (requer revisão manual)
  -h, --help                       Mostrar este ajuda
  -d, --debug                      Ativa modo debug

Exemplos:
  pkgmake
  pkgmake -s -i
  pkgmake --sign
  pkgmake --sign-only --privkey minha-chave.pem
  pkgmake -q
  pkgmake new nano
```

ARQUIVO DE CONFIGURAÇÃO
-----------------------
O pkgmake carrega automaticamente:

```
/etc/pkgmake.conf
```

Valores definidos via **linha de comando sobrescrevem**
o arquivo de configuração.

---

ARQUIVO PKGFILE
---------------
O **PKGFILE** é um script shell simples, inspirado diretamente no
**PKGBUILD do Arch Linux** e compatível com o **template de pacotes do Void Linux**.

A sintaxe, os campos e a estrutura seguem o padrão tradicional usado por
sistemas de empacotamento baseados em shell, permitindo reaproveitamento
e adaptação de receitas existentes com o mínimo de ajustes.

Na prática:
- Um **PKGBUILD do Arch** pode ser adaptado facilmente para um **PKGFILE**
- Um **template do Void Linux** pode ser usado quase sem modificações

Alguns campos comuns:
- pkgname
- version
- revision
- short_desc
- license
- homepage
- url
- distfiles
- source
- checksum
- depends
- makedepends

Funções reconhecidas:
- prepare()   (opcional)
- build()     (obrigatória)
- package()   (obrigatória)

EXEMPLO RÁPIDO
--------------
Exemplo de **PKGFILE simples**, com download de source via URL.

```bash
#!/usr/bin/env bash
# Maintainer: Vilmar Catafesta <vcatafesta@chililinux.com>

pkgname=htop
pkgver=3.4.1
pkgrel=1
pkgdesc="Interactive process viewer"
license="GPL-2.0"
depends="ncurses"
makedepends="autoconf automake libtool pkg-config make gcc ncurses-devel"
source=("https://github.com/htop-dev/htop/archive/${pkgver}.tar.gz")

prepare() {
  cd "${srcdir}/${pkgname}-${pkgver}"
  autoreconf -fi
}

build() {
  cd "${srcdir}/${pkgname}-${pkgver}"
  ./configure --prefix=/usr
  make
}

package() {
  cd "${srcdir}/${pkgname}-${pkgver}"
  make DESTDIR="$pkgdir" install
}
```

Outro exemplo:

```bash
#!/usr/bin/env bash
# Maintainer: Vilmar Catafesta <vcatafesta@gmail.com>

pkgname=chili-utils
pkgdesc="Pacote de utilitários para GNU/Linux"
pkgver=$(date +%Y%m%d)
pkgrel=$(date +%H%M)
arch=('any')
license=('MIT')
url="https://github.com/chililinux/${pkgname}"
source=("git+${url}.git")
md5sums=('SKIP')
depends=()
optdepends=()

package() {
   local dirs=("usr" "etc" "opt")

   for dir in "${dirs[@]}"; do
      if [ -d "${_pkgsrc}/${dir}" ]; then
         cp -a "${_pkgsrc}/${dir}" "$DESTDIR/"
      fi
   done
}
```

Nestes exemplos:
- o source é baixado automaticamente via `source` tarball ou git
- `${pkgname}` e `${version}` podem ser reutilizados na URL
- `checksum` pode ser definido como hash real ou `SKIP` durante testes
- o fluxo segue o mesmo modelo do **PKGBUILD (Arch)** e do **template do Void Linux**

---

REQUISITOS
----------
- Void Linux
- bash
- git
- xbps
- xbps-install
- xbps-create
- xbps-rindex

NOTAS IMPORTANTES
-----------------
- pkgmake **não substitui** o XBPS, ele usa as ferramentas!
- Deve ser executado como **usuário comum**
- Apenas a instalação de dependências requer privilégios
- O fluxo segue estritamente o que está definido no `PKGFILE`

LICENÇA
-------
MIT

AUTOR
-----
Vilmar Catafesta <vcatafesta@gmail.com>  
Projeto VoidLinuxBr

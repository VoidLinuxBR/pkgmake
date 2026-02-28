pkgmake — build utility for XBPS packages
==========================================================

DESCRIPTION
---------
**pkgmake** is a *makepkg* style tool for **Void Linux / XBPS**.

It automates the process of:
- build
- packaging
- optional installation
- package subscription
- local repository management

Operation is **fully controlled by flags**.

FEATURES
----------------
pkgmake can:

- Resolve and install dependencies (`depends` and `makedepends`)
- Run build and packaging from a `PKGFILE`
- Create `.xbps` packages
- Install the generated package (optional)
- Subscribe to packages or repositories
- Manage package output directory
- Operate silently or verbosely

DOWNLOAD AND INSTALLATION
---------------------

### 1. Via git clone

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

Installs by default:
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` (if it doesn't exist)

Removal:

```bash
sudo make uninstall
```

### 2. Via wget or curl (direct installation)

Quick installation by running the script directly from GitHub.

#### Using curl
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### Using wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

This method:
- does not require git
- installs the same files as the method via Makefile
- **does not overwrite** existing settings
- creates `/etc/pkgmake.conf.new` when necessary

### 3. Installation via XBPS repository (recommended)

**pkgmake** is also available as a package in the XBPS repository.

This is the **recommended** method as it allows automatic updating
and full integration with the system.

#### Add the repository

Create the repository file:

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

Update the indexes:

```sh
sudo xbps-install -S
```

Install the package:

```sh
sudo xbps-install voidbr-pkgmake
```

After installation, the `pkgmake` command will be available in `/usr/bin/pkgmake`.

This method:
- integrates with the Void Linux packaging system
- allows updates via `xbps-install -Su`
- does not require external scripts or manual installation

### 4. Manually running the installer (alternative)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

Use
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

CONFIGURATION FILE
-----------------------
pkgmake automatically loads:

```
/etc/pkgmake.conf
```

Values defined via **command line overwrite**
the configuration file.

---

PKGFILE FILE
---------------
**PKGFILE** is a simple shell script, directly inspired by
**PKGBUILD from Arch Linux** and compatible with the **Void Linux package template**.

The syntax, fields and structure follow the traditional pattern used by
shell-based packaging systems allowing reuse
and adapting existing recipes with minimal adjustments.

In practice:
- An Arch **PKGBUILD** can be easily adapted to a **PKGFILE**
- A **Void Linux template** can be used with almost no modifications

Some common fields:
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

Recognized functions:
- prepare() (optional)
- build() (required)
- package() (required)

QUICK EXAMPLE
--------------
Example of **simple PKGFILE**, with source download via URL.

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

Another example:

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

In these examples:
- the source is automatically downloaded via `source` tarball or git
- `${pkgname}` and `${version}` can be reused in the URL
- `checksum` can be set to actual hash or `SKIP` during testing
- the flow follows the same model as **PKGBUILD (Arch)** and **Void Linux template**

---

REQUIREMENTS
----------
- Void Linux
- bash
- git
- xbps
- xbps-install
- xbps-create
- xbps-rindex

IMPORTANT NOTES
-----------------
- pkgmake **does not replace** XBPS, it uses the tools!
- Must be run as **regular user**
- Only installing dependencies requires privileges
- The flow strictly follows what is defined in `PKGFILE`

LICENSE
-------
WITH

AUTHOR
-----
Vilmar Catafesta <vcatafesta@gmail.com>
VoidLinuxBr Project

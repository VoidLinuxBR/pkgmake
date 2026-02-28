pkgmake – Build-Dienstprogramm für XBPS-Pakete
======================================================

BESCHREIBUNG
---------
**pkgmake** ist ein Tool im *makepkg*-Stil für **Void Linux / XBPS**.

Es automatisiert den Prozess von:
- bauen
- Verpackung
- optionale Installation
- Paketabonnement
- lokale Repository-Verwaltung

Der Betrieb wird **vollständig durch Flags gesteuert**.

MERKMALE
----------------
pkgmake kann:

- Abhängigkeiten („depends“ und „makedepends“) auflösen und installieren
- Führen Sie Build und Packen aus einer „PKGFILE“ aus
- Erstellen Sie „.xbps“-Pakete
- Installieren Sie das generierte Paket (optional)
- Abonnieren Sie Pakete oder Repositorys
- Paketausgabeverzeichnis verwalten
- Handeln Sie leise oder ausführlich

DOWNLOAD UND INSTALLATION
---------------------

### 1. Über Git-Klon

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

Installiert standardmäßig:
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` (falls nicht vorhanden)

Entfernung:

```bash
sudo make uninstall
```

### 2. Über wget oder curl (direkte Installation)

Schnelle Installation durch direktes Ausführen des Skripts von GitHub.

#### Curl verwenden
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### Verwenden von wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

Diese Methode:
- erfordert keinen Git
- Installiert die gleichen Dateien wie die Methode über Makefile
- **überschreibt nicht** bestehende Einstellungen
- erstellt bei Bedarf „/etc/pkgmake.conf.new“.

### 3. Installation über das XBPS-Repository (empfohlen)

**pkgmake** ist auch als Paket im XBPS-Repository verfügbar.

Dies ist die **empfohlene** Methode, da sie eine automatische Aktualisierung ermöglicht
und vollständige Integration in das System.

#### Fügen Sie das Repository hinzu

Erstellen Sie die Repository-Datei:

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

Aktualisieren Sie die Indizes:

```sh
sudo xbps-install -S
```

Installieren Sie das Paket:

```sh
sudo xbps-install voidbr-pkgmake
```

Nach der Installation ist der Befehl „pkgmake“ in „/usr/bin/pkgmake“ verfügbar.

Diese Methode:
- lässt sich in das Void Linux-Paketsystem integrieren
- ermöglicht Updates über „xbps-install -Su“.
- erfordert keine externen Skripte oder manuelle Installation

### 4. Manuelles Ausführen des Installationsprogramms (Alternative)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

Verwenden
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

KONFIGURATIONSDATEI
-----------------------
pkgmake lädt automatisch:

```
/etc/pkgmake.conf
```

Über **Befehlszeilenüberschreibung** definierte Werte
die Konfigurationsdatei.

---

PKGFILE-DATEI
---------------
**PKGFILE** ist ein einfaches Shell-Skript, direkt inspiriert von
**PKGBUILD von Arch Linux** und kompatibel mit der **Void Linux-Paketvorlage**.

Syntax, Felder und Struktur folgen dem traditionellen Muster von
Schalenbasierte Verpackungssysteme, die eine Wiederverwendung ermöglichen
und Anpassung vorhandener Rezepte mit minimalen Anpassungen.

In der Praxis:
- Ein Arch **PKGBUILD** kann leicht an ein **PKGFILE** angepasst werden
- Eine **Void Linux-Vorlage** kann fast ohne Änderungen verwendet werden

Einige häufige Bereiche:
- Paketname
- Version
- Revision
- short_desc
- Lizenz
- Homepage
- URL
- distfiles
- Quelle
- Prüfsumme
- kommt darauf an
- machtabhängig

Anerkannte Funktionen:
- Prepare() (optional)
- build() (erforderlich)
- package() (erforderlich)

KURZES BEISPIEL
--------------
Beispiel einer **einfachen PKGFILE** mit Quelldownload über URL.

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

Ein weiteres Beispiel:

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

In diesen Beispielen:
- Die Quelle wird automatisch über „Source“-Tarball oder Git heruntergeladen
- „${pkgname}“ und „${version}“ können in der URL wiederverwendet werden
- „Prüfsumme“ kann während des Tests auf den tatsächlichen Hash oder „SKIP“ gesetzt werden
- Der Ablauf folgt dem gleichen Modell wie **PKGBUILD (Arch)** und **Void Linux template**

---

ANFORDERUNGEN
----------
- Leeres Linux
- bash
- Idiot
- xbps
- xbps-install
- xbps-create
- xbps-rindex

WICHTIGE HINWEISE
-----------------
- pkgmake **ersetzt** XBPS nicht, es nutzt die Tools!
- Muss als **normaler Benutzer** ausgeführt werden
- Nur für die Installation von Abhängigkeiten sind Berechtigungen erforderlich
- Der Ablauf folgt strikt den Definitionen in „PKGFILE“.

LIZENZ
-------
MIT

AUTOR
-----
Vilmar Catafesta <vcatafesta@gmail.com>
VoidLinuxBr-Projekt

pkgmake: utilità di creazione per pacchetti XBPS
==========================================================

DESCRIZIONE
---------
**pkgmake** è uno strumento in stile *makepkg* per **Void Linux / XBPS**.

Automatizza il processo di:
- costruire
- confezione
- installazione opzionale
- abbonamento a pacchetto
- gestione del repository locale

Il funzionamento è **completamente controllato da flag**.

CARATTERISTICHE
----------------
pkgmake può:

- Risolvere e installare le dipendenze ("depends" e "makedepends")
- Esegui build e confezionamento da un `PKGFILE`
- Crea pacchetti `.xbps`
- Installa il pacchetto generato (facoltativo)
- Iscriviti a pacchetti o repository
- Gestisci la directory di output del pacchetto
- Operare in silenzio o in modo dettagliato

DOWNLOAD E INSTALLAZIONE
---------------------

### 1. Tramite git clone

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

Installa per impostazione predefinita:
- `/usr/bin/pkgmake`
- `/usr/condividi/pkgmake`
- `/etc/pkgmake.conf` (se non esiste)

Rimozione:

```bash
sudo make uninstall
```

### 2. Tramite wget o curl (installazione diretta)

Installazione rapida eseguendo lo script direttamente da GitHub.

#### Usando l'arricciatura
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### Utilizzando wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

Questo metodo:
- non richiede Git
- installa gli stessi file del metodo tramite Makefile
- **non sovrascrive** le impostazioni esistenti
- crea `/etc/pkgmake.conf.new` quando necessario

### 3. Installazione tramite repository XBPS (consigliata)

**pkgmake** è disponibile anche come pacchetto nel repository XBPS.

Questo è il metodo **consigliato** poiché consente l'aggiornamento automatico
e piena integrazione con il sistema.

#### Aggiungi il deposito

Crea il file del repository:

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

Aggiorna gli indici:

```sh
sudo xbps-install -S
```

Installa il pacchetto:

```sh
sudo xbps-install voidbr-pkgmake
```

Dopo l'installazione, il comando `pkgmake` sarà disponibile in `/usr/bin/pkgmake`.

Questo metodo:
- si integra con il sistema di packaging Void Linux
- consente gli aggiornamenti tramite `xbps-install -Su`
- non richiede script esterni o installazione manuale

### 4. Esecuzione manuale del programma di installazione (alternativa)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

Utilizzo
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

FILE DI CONFIGURAZIONE
-----------------------
pkgmake carica automaticamente:

```
/etc/pkgmake.conf
```

Valori definiti tramite **sovrascrittura riga di comando**
il file di configurazione.

---

FILE PKGFILE
---------------
**PKGFILE** è un semplice script di shell, direttamente ispirato a
**PKGBUILD di Arch Linux** e compatibile con il **modello di pacchetto Void Linux**.

La sintassi, i campi e la struttura seguono lo schema tradizionale utilizzato da
sistemi di imballaggio basati su guscio che consentono il riutilizzo
e adattare le ricette esistenti con modifiche minime.

In pratica:
- Un **PKGBUILD** di Arch può essere facilmente adattato a un **PKGFILE**
- Un **modello Void Linux** può essere utilizzato quasi senza modifiche

Alcuni campi comuni:
- nomepacchetto
- versione
- revisione
- short_desc
- licenza
- home page
- URL
- distfiles
- fonte
- somma di controllo
- dipende
- makedepends

Funzioni riconosciute:
- preparare() (facoltativo)
- build() (richiesto)
- pacchetto() (richiesto)

ESEMPIO RAPIDO
--------------
Esempio di **semplice PKGFILE**, con download del sorgente tramite URL.

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

Un altro esempio:

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

In questi esempi:
- il sorgente viene scaricato automaticamente tramite tarball "source" o git
- `${pkgname}` e `${version}` possono essere riutilizzati nell'URL
- "checksum" può essere impostato sull'hash effettivo o su "SKIP" durante il test
- il flusso segue lo stesso modello di **PKGBUILD (Arch)** e **Void Linux template**

---

REQUISITI
----------
- Linux vuoto
- bash
- buono
- xbps
- installazione xbps
- xbps-crea
- xbps-rindex

NOTE IMPORTANTI
-----------------
- pkgmake **non sostituisce** XBPS, utilizza gli strumenti!
- Deve essere eseguito come **utente normale**
- Solo l'installazione delle dipendenze richiede privilegi
- Il flusso segue rigorosamente quanto definito in `PKGFILE`

LICENZA
-------
CON

AUTORE
-----
Vilmar Catafesta <vcatafesta@gmail.com>
Progetto VoidLinuxBr

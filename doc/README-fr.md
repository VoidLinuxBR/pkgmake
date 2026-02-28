pkgmake — utilitaire de construction pour les packages XBPS
===========================================================

DESCRIPTION
----------
**pkgmake** est un outil de style *makepkg* pour **Void Linux / XBPS**.

Il automatise le processus de :
- construire
- conditionnement
- installation en option
- abonnement au forfait
- gestion du référentiel local

Le fonctionnement est **entièrement contrôlé par des drapeaux**.

CARACTÉRISTIQUES
----------------
pkgmake peut :

- Résoudre et installer les dépendances (`depends` et `makedepends`)
- Exécuter la construction et l'empaquetage à partir d'un `PKGFILE`
- Créer des packages `.xbps`
- Installez le package généré (facultatif)
- Abonnez-vous à des packages ou à des référentiels
- Gérer le répertoire de sortie du package
- Opérer silencieusement ou verbeusement

TÉLÉCHARGEMENT ET INSTALLATION
---------------------

### 1. Via le clone git

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

Installe par défaut :
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` (s'il n'existe pas)

Suppression:

```bash
sudo make uninstall
```

### 2. Via wget ou curl (installation directe)

Installation rapide en exécutant le script directement depuis GitHub.

#### Utiliser la boucle
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### Utiliser wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

Cette méthode :
- ne nécessite pas git
- installe les mêmes fichiers que la méthode via Makefile
- **n'écrase pas** les paramètres existants
- crée `/etc/pkgmake.conf.new` si nécessaire

### 3. Installation via le référentiel XBPS (recommandé)

**pkgmake** est également disponible sous forme de package dans le référentiel XBPS.

Il s'agit de la méthode **recommandée** car elle permet une mise à jour automatique
et une intégration complète avec le système.

#### Ajouter le référentiel

Créez le fichier du référentiel :

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

Mettez à jour les index :

```sh
sudo xbps-install -S
```

Installez le paquet :

```sh
sudo xbps-install voidbr-pkgmake
```

Après l'installation, la commande `pkgmake` sera disponible dans `/usr/bin/pkgmake`.

Cette méthode :
- s'intègre au système de packaging Void Linux
- autorise les mises à jour via `xbps-install -Su`
- ne nécessite pas de scripts externes ni d'installation manuelle

### 4. Exécution manuelle du programme d'installation (alternative)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

Utiliser
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

FICHIER DE CONFIGURATION
-----------------------
pkgmake charge automatiquement :

```
/etc/pkgmake.conf
```

Valeurs définies via **écrasement de la ligne de commande**
le fichier de configuration.

---

FICHIER PKGFILE
-----------
**PKGFILE** est un simple script shell, directement inspiré de
**PKGBUILD d'Arch Linux** et compatible avec le **modèle de package Void Linux**.

La syntaxe, les champs et la structure suivent le modèle traditionnel utilisé par
systèmes d'emballage à base de coque permettant la réutilisation
et adapter les recettes existantes avec des ajustements minimes.

En pratique:
- Un Arch **PKGBUILD** peut être facilement adapté à un **PKGFILE**
- Un **modèle Linux vide** peut être utilisé avec presque aucune modification

Quelques champs courants :
- nom de paquet
- version
- révision
- short_desc
- licence
- page d'accueil
- URL
- fichiers de distribution
- source
- somme de contrôle
- ça dépend
- ça dépend

Fonctions reconnues :
- préparer() (facultatif)
- build() (obligatoire)
- paquet() (obligatoire)

EXEMPLE RAPIDE
--------------
Exemple de **simple PKGFILE**, avec téléchargement des sources via URL.

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

Autre exemple :

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

Dans ces exemples :
- la source est automatiquement téléchargée via l'archive tar `source` ou git
- `${pkgname}` et `${version}` peuvent être réutilisés dans l'URL
- `checksum` peut être défini sur le hachage réel ou `SKIP` pendant les tests
- le flux suit le même modèle que **PKGBUILD (Arch)** et **Void Linux template**

---

EXIGENCES
----------
- Vider Linux
- frapper
- git
- xbps
- installation xbps
- xbps-créer
- xbps-rindex

REMARQUES IMPORTANTES
-----------------
- pkgmake **ne remplace pas** XBPS, il utilise les outils !
- Doit être exécuté en tant qu'**utilisateur régulier**
- Seule l'installation de dépendances nécessite des privilèges
- Le flux suit strictement ce qui est défini dans `PKGFILE`

LICENCE
-------
AVEC

AUTEUR
-----
Catafesta de Vilmar <vcatafesta@gmail.com>
Projet VoidLinuxBr

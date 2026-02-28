pkgmake: utilidad de compilación para paquetes XBPS
============================================================

DESCRIPCIÓN
---------
**pkgmake** es una herramienta de estilo *makepkg* para **Void Linux/XBPS**.

Automatiza el proceso de:
- construir
- embalaje
- instalación opcional
- suscripción de paquete
- gestión de repositorios locales

La operación está **totalmente controlada por banderas**.

CARACTERÍSTICAS
----------------
paquetemake puede:

- Resolver e instalar dependencias (`depende` y `makedepends`)
- Ejecute la compilación y el empaquetado desde un `PKGFILE`
- Crear paquetes `.xbps`
- Instale el paquete generado (opcional)
- Suscríbete a paquetes o repositorios
- Administrar el directorio de salida del paquete
- Operar en silencio o detalladamente

DESCARGA E INSTALACIÓN
---------------------

### 1. A través de git clone

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

Se instala por defecto:
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` (si no existe)

Eliminación:

```bash
sudo make uninstall
```

### 2. Vía wget o curl (instalación directa)

Instalación rápida ejecutando el script directamente desde GitHub.

#### Usando rizo
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### Usando wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

Este método:
- no requiere git
- instala los mismos archivos que el método a través de Makefile
- **no sobrescribe** la configuración existente
- crea `/etc/pkgmake.conf.new` cuando sea necesario

### 3. Instalación mediante repositorio XBPS (recomendado)

**pkgmake** también está disponible como paquete en el repositorio XBPS.

Este es el método **recomendado** ya que permite la actualización automática.
y total integración con el sistema.

#### Agregar el repositorio

Cree el archivo del repositorio:

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

Actualizar los índices:

```sh
sudo xbps-install -S
```

Instale el paquete:

```sh
sudo xbps-install voidbr-pkgmake
```

Después de la instalación, el comando `pkgmake` estará disponible en `/usr/bin/pkgmake`.

Este método:
- se integra con el sistema de empaquetado Void Linux
- permite actualizaciones a través de `xbps-install -Su`
- no requiere scripts externos ni instalación manual

### 4. Ejecutar manualmente el instalador (alternativa)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

Usar
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

ARCHIVO DE CONFIGURACIÓN
-----------------------
pkgmake carga automáticamente:

```
/etc/pkgmake.conf
```

Valores definidos mediante **sobrescritura de línea de comando**
el archivo de configuración.

---

ARCHIVO PKGFILE
---------------
**PKGFILE** es un script de shell simple, directamente inspirado en
**PKGBUILD de Arch Linux** y compatible con la **plantilla de paquete Void Linux**.

La sintaxis, los campos y la estructura siguen el patrón tradicional utilizado por
Sistemas de embalaje basados en cáscara que permiten la reutilización.
y adaptar recetas existentes con ajustes mínimos.

En la práctica:
- Un Arch **PKGBUILD** se puede adaptar fácilmente a un **PKGFILE**
- Se puede utilizar una **plantilla Void Linux** casi sin modificaciones

Algunos campos comunes:
- nombrepaquete
- versión
- revisión
- short_desc
- licencia
- página principal
- URL
- archivos dist
- fuente
- suma de control
- depende
- depende

Funciones reconocidas:
- preparar() (opcional)
- construir() (obligatorio)
- paquete() (obligatorio)

EJEMPLO RÁPIDO
--------------
Ejemplo de **PKGFILE** simple, con descarga del código fuente a través de URL.

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

Otro ejemplo:

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

En estos ejemplos:
- la fuente se descarga automáticamente a través de tarball `source` o git
- `${pkgname}` y `${version}` se pueden reutilizar en la URL
- La "suma de comprobación" se puede configurar como hash real o "SALTAR" durante la prueba.
- el flujo sigue el mismo modelo que **PKGBUILD (Arch)** y **Void Linux template**

---

REQUISITOS
----------
- Linux vacío
- intento
- git
- xbps
- instalación xbps
- xbps-crear
- xbps-rindex

NOTAS IMPORTANTES
-----------------
- pkgmake **no reemplaza** XBPS, ¡usa las herramientas!
- Debe ejecutarse como **usuario normal**
- Sólo la instalación de dependencias requiere privilegios
- El flujo sigue estrictamente lo definido en `PKGFILE`

LICENCIA
-------
CON

AUTOR
-----
Vilmar Catafesta <vcatafesta@gmail.com>
Proyecto VoidLinuxBr

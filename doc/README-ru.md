pkgmake — утилита сборки пакетов XBPS
=======================================================

ОПИСАНИЕ
---------
**pkgmake** — это инструмент стиля *makepkg* для **Void Linux/XBPS**.

Он автоматизирует процесс:
- строить
- упаковка
- дополнительная установка
- подписка на пакет
- управление локальным репозиторием

Операция **полностью контролируется флагами**.

ФУНКЦИИ
----------------
pkgmake может:

- Разрешение и установка зависимостей (`dependents` и `makedependents`)
- Запустите сборку и упаковку из PKGFILE.
- Создайте пакеты `.xbps`
- Установите сгенерированный пакет (необязательно)
- Подписаться на пакеты или репозитории
- Управление выходным каталогом пакета
- Работайте тихо или многословно

СКАЧИВАНИЕ И УСТАНОВКА
---------------------

### 1. Через git-клон

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

Устанавливается по умолчанию:
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` (если он не существует)

Удаление:

```bash
sudo make uninstall
```

### 2. Через wget или curl (прямая установка)

Быстрая установка путем запуска скрипта прямо с GitHub.

#### Использование завитка
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### Использование wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

Этот метод:
- не требует git
- устанавливает те же файлы, что и метод через Makefile
- **не перезаписывает** существующие настройки
- при необходимости создает `/etc/pkgmake.conf.new`

### 3. Установка через репозиторий XBPS (рекомендуется)

**pkgmake** также доступен в виде пакета в репозитории XBPS.

Это **рекомендуемый** метод, поскольку он позволяет выполнять автоматическое обновление.
и полная интеграция с системой.

#### Добавить репозиторий

Создайте файл репозитория:

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

Обновите индексы:

```sh
sudo xbps-install -S
```

Установите пакет:

```sh
sudo xbps-install voidbr-pkgmake
```

После установки команда pkgmake будет доступна в /usr/bin/pkgmake.

Этот метод:
- интегрируется с системой пакетов Void Linux
- разрешает обновления через `xbps-install -Su`
- не требует внешних скриптов или ручной установки

### 4. Запуск установщика вручную (альтернативный вариант)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

Использовать
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

КОНФИГУРАЦИОННЫЙ ФАЙЛ
-----------------------
pkgmake автоматически загружает:

```
/etc/pkgmake.conf
```

Значения, определенные с помощью **перезаписи командной строки**
файл конфигурации.

---

PKGFILE ФАЙЛ
---------------
**PKGFILE** — это простой сценарий оболочки, вдохновленный
**PKGBUILD из Arch Linux** и совместим с **шаблоном пакета Void Linux**.

Синтаксис, поля и структура соответствуют традиционному шаблону, используемому
упаковочные системы на основе оболочки, позволяющие повторное использование
и адаптация существующих рецептов с минимальными корректировками.

На практике:
- Arch **PKGBUILD** можно легко адаптировать к **PKGFILE**.
- **Шаблон Void Linux** можно использовать практически без изменений.

Некоторые общие поля:
- имя_пакета
- версия
- пересмотр
- short_desc
- лицензия
- домашняя страница
- URL
- дистрибутивные файлы
- источник
- контрольная сумма
- зависит от
- сделать зависит

Признанные функции:
- подготовить() (необязательно)
- построить() (обязательно)
- пакет() (обязательно)

БЫСТРЫЙ ПРИМЕР
--------------
Пример **простого PKGFILE** с загрузкой исходного кода по URL-адресу.

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

Другой пример:

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

В этих примерах:
- исходный код автоматически загружается через tarball `source` или git
- `${pkgname}` и `${version}` можно повторно использовать в URL-адресе.
- `Контрольная сумма` может быть установлена на фактический хэш или `SKIP` во время тестирования.
- поток соответствует той же модели, что и **PKGBUILD (Arch)** и **шаблон Void Linux**.

---

ТРЕБОВАНИЯ
----------
- Пустота Linux
- бить
- мерзавец
- xbps
- xbps-установка
- xbps-создать
- xbps-rindex

ВАЖНЫЕ ПРИМЕЧАНИЯ
-----------------
- pkgmake **не заменяет** XBPS, он использует инструменты!
- Необходимо запускать от имени **обычного пользователя**
- Только установка зависимостей требует привилегий
- Поток строго соответствует тому, что определено в PKGFILE.

ЛИЦЕНЗИЯ
-------
С

АВТОР
-----
Вилмар Катафеста <vcatafesta@gmail.com>
Проект VoidLinuxBr

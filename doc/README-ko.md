pkgmake — XBPS 패키지용 빌드 유틸리티
========================================================

설명
---------
**pkgmake**는 **Void Linux/XBPS**용 *makepkg* 스타일 도구입니다.

다음 프로세스를 자동화합니다.
- 짓다
- 포장
- 선택적 설치
- 패키지 구독
- 로컬 저장소 관리

작동은 **플래그에 의해 완전히 제어됩니다**.

특징
----------------
pkgmake는 다음을 수행할 수 있습니다.

- 종속성 해결 및 설치(`dependents` 및 `makedependents`)
- `PKGFILE`에서 빌드 및 패키징 실행
- `.xbps` 패키지 생성
- 생성된 패키지 설치(선택 사항)
- 패키지 또는 저장소 구독
- 패키지 출력 디렉터리 관리
- 자동으로 또는 장황하게 작동

다운로드 및 설치
--------

### 1. git clone을 통해

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

기본적으로 설치:
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf`(존재하지 않는 경우)

제거:

```bash
sudo make uninstall
```

### 2. wget 또는 컬을 통해(직접 설치)

GitHub에서 직접 스크립트를 실행하여 빠르게 설치할 수 있습니다.

#### 컬 사용하기
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### wget 사용
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

이 방법은 다음과 같습니다.
- 자식이 필요하지 않습니다
- Makefile을 통해 메소드와 동일한 파일을 설치합니다.
- **기존 설정을 덮어쓰지 않음**
- 필요할 때 `/etc/pkgmake.conf.new`를 생성합니다.

### 3. XBPS 저장소를 통한 설치(권장)

**pkgmake**는 XBPS 저장소의 패키지로도 사용할 수 있습니다.

자동 업데이트가 가능하므로 **권장** 방법입니다.
시스템과의 완전한 통합.

#### 저장소 추가

저장소 파일을 만듭니다.

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

색인을 업데이트합니다.

```sh
sudo xbps-install -S
```

패키지를 설치합니다:

```sh
sudo xbps-install voidbr-pkgmake
```

설치 후 `pkgmake` 명령은 `/usr/bin/pkgmake`에서 사용할 수 있습니다.

이 방법은 다음과 같습니다.
- Void Linux 패키징 시스템과 통합
- `xbps-install -Su`를 통한 업데이트 허용
- 외부 스크립트나 수동 설치가 필요하지 않습니다.

### 4. 설치 프로그램 수동 실행(대안)

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

사용
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

구성 파일
----------
pkgmake가 자동으로 로드됩니다.

```
/etc/pkgmake.conf
```

**명령줄 덮어쓰기**를 통해 정의된 값
구성 파일.

---

PKG파일 파일
---------------
**PKGFILE**은 다음에서 직접 영감을 받은 간단한 쉘 스크립트입니다.
**Arch Linux의 PKGBUILD**이며 **Void Linux 패키지 템플릿**과 호환됩니다.

구문, 필드 및 구조는 다음에서 사용되는 전통적인 패턴을 따릅니다.
재사용이 가능한 쉘 기반 포장 시스템
최소한의 조정으로 기존 레시피를 조정합니다.

실제로:
- Arch **PKGBUILD**는 **PKGFILE**에 쉽게 적용될 수 있습니다.
- **Void Linux 템플릿**은 거의 수정 없이 사용할 수 있습니다.

몇 가지 공통 필드:
- 패키지 이름
- 버전
- 개정
- short_desc
- 특허
- 홈페이지
- URL
- distfiles
- 원천
- 체크섬
- 의존한다
- 마케데펜스

인식된 기능:
- 준비() (선택 사항)
- 빌드() (필수)
- 패키지() (필수)

빠른 예
--------------
URL을 통해 소스를 다운로드하는 **간단한 PKGFILE**의 예입니다.

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

또 다른 예:

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

다음 예에서:
- 소스는 'source' tarball 또는 git을 통해 자동으로 다운로드됩니다.
- `${pkgname}` 및 `${version}`를 URL에서 재사용할 수 있습니다.
- '체크섬'은 테스트 중에 실제 해시로 설정하거나 'SKIP'으로 설정할 수 있습니다.
- 흐름은 **PKGBUILD(Arch)** 및 **Void Linux 템플릿**과 동일한 모델을 따릅니다.

---

요구 사항
----------
- 공허한 리눅스
- 세게 때리다
- 자식
- xbps
- xbps 설치
- xbps 생성
- xbps-rindex

중요 사항
-----------------
- pkgmake는 **XBPS를 대체하지 않습니다**, 도구를 사용합니다!
- **일반 사용자**로 실행해야 합니다.
- 종속성 설치에만 권한이 필요합니다.
- 흐름은 `PKGFILE`에 정의된 내용을 엄격하게 따릅니다.

특허
-------
와 함께

작가
-----
빌마르 카타페스타 <vcatafesta@gmail.com>
VoidLinuxBr 프로젝트

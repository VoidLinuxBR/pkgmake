pkgmake — XBPS 套件的建置公用程式
=============================================================

描述
---------
**pkgmake** 是用於 **Void Linux / XBPS** 的 *makepkg* 風格工具。

它會自動執行以下程序：
- 建造
- 包裝
- 可選安裝
- 套餐訂閱
- 本機儲存庫管理

操作**完全由標誌控制**。

特徵
-----------------
pkgmake 可以：

- 解決並安裝依賴項（“depends”和“makedepends”）
- 從“PKGFILE”運行建置和打包
- 建立 `.xbps` 包
- 安裝產生的套件（可選）
- 訂閱套件或儲存庫
- 管理包輸出目錄
- 靜默或冗長地操作

下載與安裝
---------------------

### 1.透過git克隆

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

預設安裝：
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` （如果不存在）

移動：

```bash
sudo make uninstall
```

### 2.透過wget或curl（直接安裝）

透過直接從 GitHub 運行腳本來快速安裝。

#### 使用捲曲
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### 使用 wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

這個方法：
- 不需要git
- 透過 Makefile 安裝與方法相同的文件
- **不會覆蓋**現有設置
- 必要時創建 `/etc/pkgmake.conf.new`

### 3.透過XBPS儲存庫安裝（建議）

**pkgmake** 也可以作為 XBPS 儲存庫中的套件提供。

這是**推薦**方法，因為它允許自動更新
並與系統完全整合。

#### 新增儲存庫

建立儲存庫檔案：

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

更新索引：

```sh
sudo xbps-install -S
```

安裝包：

```sh
sudo xbps-install voidbr-pkgmake
```

安裝後，“pkgmake”指令將在“/usr/bin/pkgmake”中可用。

這個方法：
- 與 Void Linux 打包系統集成
- 允許透過“xbps-install -Su”進行更新
- 不需要外部腳本或手動安裝

### 4. 手動執行安裝程式（替代）

```sh
wget https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh
chmod +x install.sh
sudo ./install.sh
```
---

使用
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

設定檔
-----------------------
pkgmake 自動載入：

```
/etc/pkgmake.conf
```

透過**命令列覆蓋**定義的值
設定檔。

---

PKGFILE 文件
---------------
**PKGFILE** 是一個簡單的 shell 腳本，直接受到啟發
**來自 Arch Linux 的 PKGBUILD** 並與 **Void Linux 套件範本**相容。

文法、欄位和結構遵循傳統模式
允許重複使用的基於殼的包裝系統
並以最小的調整調整現有的食譜。

在實踐中：
- Arch **PKGBUILD** 可以輕鬆適應 **PKGFILE**
- **Void Linux 範本** 幾乎無需修改即可使用

一些常見的字段：
- 軟體包名稱
- 版本
- 修訂
- 短描述
- 執照
- 首頁
- 網址
- 分佈文件
- 來源
- 校驗和
- 取決於
- 依賴於

公認的功能：
- 準備（）（可選）
- 構建（）（必需）
- 包（）（必需）

簡單範例
--------------
**簡單 PKGFILE** 範例，透過 URL 下載原始碼。

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

另一個例子：

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

在這些例子中：
- 原始碼透過 `source` tarball 或 git 自動下載
- `${pkgname}` 和 `${version}` 可以在 URL 中重複使用
- 測試期間可以將“checksum”設定為實際雜湊值或“SKIP”
- 此流程遵循與 **PKGBUILD (Arch)** 和 **Void Linux template** 相同的模型

---

要求
----------
- 虛空Linux
- 巴什
- git
- xbps
- xbps 安裝
- xbps-創建
- xbps-rindex

重要注意事項
-----------------
- pkgmake **不會取代** XBPS，它使用工具！
- 必須以 **一般使用者** 身分執行
- 僅安裝依賴項需要權限
- 此流程嚴格遵循「PKGFILE」中定義的內容

執照
-------
和

作者
-----
薇瑪‧卡特菲斯塔 <vcatafesta@gmail.com>
VoidLinuxBr 項目

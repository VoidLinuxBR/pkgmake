pkgmake — XBPS 包的构建实用程序
=============================================================

描述
---------
**pkgmake** 是用于 **Void Linux / XBPS** 的 *makepkg* 风格工具。

它自动执行以下过程：
- 建造
- 包装
- 可选安装
- 套餐订阅
- 本地存储库管理

操作**完全由标志控制**。

特征
-----------------
pkgmake 可以：

- 解决并安装依赖项（“depends”和“makedepends”）
- 从“PKGFILE”运行构建和打包
- 创建 `.xbps` 包
- 安装生成的包（可选）
- 订阅包或存储库
- 管理包输出目录
- 静默或冗长地操作

下载与安装
---------------------

### 1.通过git克隆

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```

默认安装：
- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` （如果不存在）

移动：

```bash
sudo make uninstall
```

### 2.通过wget或curl（直接安装）

通过直接从 GitHub 运行脚本来快速安装。

#### 使用卷曲
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### 使用 wget
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

这个方法：
- 不需要git
- 通过 Makefile 安装与方法相同的文件
- **不会覆盖**现有设置
- 必要时创建 `/etc/pkgmake.conf.new`

### 3.通过XBPS存储库安装（推荐）

**pkgmake** 也可以作为 XBPS 存储库中的包提供。

这是**推荐**方法，因为它允许自动更新
并与系统完全集成。

#### 添加存储库

创建存储库文件：

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

更新索引：

```sh
sudo xbps-install -S
```

安装包：

```sh
sudo xbps-install voidbr-pkgmake
```

安装后，“pkgmake”命令将在“/usr/bin/pkgmake”中可用。

这个方法：
- 与 Void Linux 打包系统集成
- 允许通过“xbps-install -Su”进行更新
- 不需要外部脚本或手动安装

### 4. 手动运行安装程序（替代）

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

配置文件
-----------------------
pkgmake 自动加载：

```
/etc/pkgmake.conf
```

通过**命令行覆盖**定义的值
配置文件。

---

PKGFILE 文件
---------------
**PKGFILE** 是一个简单的 shell 脚本，直接受到启发
**来自 Arch Linux 的 PKGBUILD** 并与 **Void Linux 包模板**兼容。

语法、字段和结构遵循传统模式
允许重复使用的基于壳的包装系统
并以最小的调整调整现有的食谱。

在实践中：
- Arch **PKGBUILD** 可以轻松适应 **PKGFILE**
- **Void Linux 模板** 几乎无需修改即可使用

一些常见的字段：
- 软件包名称
- 版本
- 修订
- 短描述
- 执照
- 主页
- 网址
- 分布文件
- 来源
- 校验和
- 取决于
- 依赖于

公认的功能：
- 准备（）（可选）
- 构建（）（必需）
- 包（）（必需）

简单示例
--------------
**简单 PKGFILE** 示例，通过 URL 下载源代码。

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

另一个例子：

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

在这些例子中：
- 源代码通过 `source` tarball 或 git 自动下载
- `${pkgname}` 和 `${version}` 可以在 URL 中重复使用
- 测试期间可以将“checksum”设置为实际哈希值或“SKIP”
- 该流程遵循与 **PKGBUILD (Arch)** 和 **Void Linux template** 相同的模型

---

要求
----------
- 虚空Linux
- 巴什
- git
- xbps
- xbps 安装
- xbps-创建
- xbps-rindex

重要注意事项
-----------------
- pkgmake **不会取代** XBPS，它使用工具！
- 必须以 **普通用户** 身份运行
- 仅安装依赖项需要权限
- 该流程严格遵循“PKGFILE”中定义的内容

执照
-------
和

作者
-----
维尔玛·卡特菲斯塔 <vcatafesta@gmail.com>
VoidLinuxBr 项目

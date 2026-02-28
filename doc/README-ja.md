pkgmake — XBPS パッケージ用のビルド ユーティリティ
=====================================================

説明
---------
**pkgmake** は、**Void Linux / XBPS** 用の *makepkg* スタイル ツールです。

次のプロセスを自動化します。
- 建てる
- 梱包
- オプションの取り付け
- パッケージのサブスクリプション
- ローカルリポジトリ管理

操作は **フラグによって完全に制御されます**。

特徴
----------------
pkgmake では次のことができます。

- 依存関係を解決してインストールする (`depends` および `makedepends`)
- 「PKGFILE」からビルドとパッケージ化を実行します。
- `.xbps` パッケージを作成する
- 生成されたパッケージをインストールします (オプション)
- パッケージまたはリポジトリをサブスクライブする
- パッケージの出力ディレクトリを管理する
- サイレントまたは冗長で操作する

ダウンロードとインストール
---------------------

### 1. git clone 経由

```bash
# Clone o repositório
git clone --depth=1 https://github.com/voidlinuxbr/voidbr-pkgmake.git

# entre no diretório
cd voidbr-pkgmake

# Instale via Makefile
sudo make install
```


- `/usr/bin/pkgmake`
- `/usr/share/pkgmake`
- `/etc/pkgmake.conf` (存在しない場合)

除去：

```bash
sudo make uninstall
```

### 2. wgetまたはcurl経由（直接インストール）

GitHub から直接スクリプトを実行することで、簡単にインストールできます。

#### カールの使用
```sh
curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

#### wgetの使用
```sh
wget -qO- https://raw.githubusercontent.com/voidlinuxbr/voidbr-pkgmake/main/install.sh | sudo bash
```

この方法:
- gitは必要ありません
- Makefile 経由のメソッドと同じファイルをインストールします
- **既存の設定は上書きされません**
- 必要に応じて `/etc/pkgmake.conf.new` を作成します

### 3. XBPS リポジトリ経由のインストール (推奨)

**pkgmake** は、XBPS リポジトリのパッケージとしても入手できます。

これは自動更新が可能なため、**推奨**な方法です。
システムとの完全な統合。

#### リポジトリを追加する

リポジトリ ファイルを作成します。

```sh
echo "repository=https://void.chililinux.com/voidlinux/current" \
  | sudo tee /etc/xbps.d/chililinux.conf
```

インデックスを更新します。

```sh
sudo xbps-install -S
```

パッケージをインストールします。

```sh
sudo xbps-install voidbr-pkgmake
```

インストール後、`pkgmake` コマンドが `/usr/bin/pkgmake` で使用できるようになります。

この方法:
- Void Linux パッケージング システムと統合
- `xbps-install -Su` によるアップデートを許可します
- 外部スクリプトや手動インストールは必要ありません

### 4. インストーラーを手動で実行する (代替)

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

設定ファイル
-------------------------
pkgmake は以下を自動的にロードします。

```
/etc/pkgmake.conf
```

**コマンドラインの上書き**によって定義された値
設定ファイル。

---

PKGFファイル
---------------
**PKGFILE** は、以下から直接インスピレーションを得た単純なシェル スクリプトです。
**Arch Linux** の PKGBUILD であり、**Void Linux パッケージ テンプレート** と互換性があります。

構文、フィールド、構造は、従来のパターンに従っています。
再利用を可能にするシェルベースのパッケージングシステム
最小限の調整で既存のレシピを適応させます。

実際には:
- Arch **PKGBUILD** は **PKGFILE** に簡単に適合させることができます
- **Void Linux テンプレート** は、ほとんど変更を加えずに使用できます。

いくつかの一般的なフィールド:
- パッケージ名
- バージョン
- リビジョン
- short_desc
- ライセンス
- ホームページ
- URL
- 配布ファイル
- ソース
- チェックサム
- 依存します
- メイク依存

認識される機能:
- prepare() (オプション)
- build() (必須)
- package() (必須)

簡単な例
--------------
URL 経由でソースをダウンロードする **単純な PKGFILE** の例。

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

別の例:

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

これらの例では:
- ソースは「source」tarball または git 経由で自動的にダウンロードされます。
- `${pkgname}` と `${version}` は URL で再利用できます
- テスト中に「チェックサム」を実際のハッシュまたは「SKIP」に設定できます
- フローは **PKGBUILD (Arch)** および **Void Linux テンプレート** と同じモデルに従います

---

要件
----------
- ボイド・リナックス
- バッシュ
- git
- xbps
- xbps-インストール
- xbps-作成
- xbps-rindex

重要な注意事項
-----------------
- pkgmake は **XBPS を置き換えるものではありません**。ツールを使用します。
- **通常ユーザー**として実行する必要があります
- 依存関係のインストールのみに権限が必要です
- フローは `PKGFILE` で定義された内容に厳密に従います。

ライセンス
-------
と

著者
-----
ヴィルマル・カタフェスタ <vcatafesta@gmail.com>
VoidLinuxBr プロジェクト

#!/usr/bin/env bash
set -e

# pkgmake installer
# Instalação direta via GitHub (wget ou curl)
#
# Uso:
#   curl -fsSL https://raw.githubusercontent.com/voidlinuxbr/pkgmake/main/install.sh | sudo bash
#   wget -qO-  https://raw.githubusercontent.com/voidlinuxbr/pkgmake/main/install.sh | sudo bash

REPO_URL="https://raw.githubusercontent.com/voidlinuxbr/pkgmake/main"

BIN_DIR="/usr/bin"
SHARE_DIR="/usr/share/pkgmake"
CONF_DEST="/etc/pkgmake.conf"

TMPDIR="$(mktemp -d)"

die() {
  echo "erro: $*" >&2
  exit 1
}

info() {
  echo "==> $*"
}

need_cmd() {
  command -v "$1" >/dev/null 2>&1 || die "comando '$1' não encontrado"
}

cleanup() {
  rm -rf "$TMPDIR"
}
trap cleanup EXIT

# Checagens básicas
need_cmd install
need_cmd mkdir
need_cmd rm

if [[ $EUID -ne 0 ]]; then
  die "execute este instalador como root (sudo)"
fi

# Downloader
if command -v curl >/dev/null 2>&1; then
  DL="curl -fsSL"
elif command -v wget >/dev/null 2>&1; then
  DL="wget -qO-"
else
  die "necessário 'curl' ou 'wget' para download"
fi

info "Baixando arquivos do GitHub..."

# Binários
$DL "$REPO_URL/usr/bin/pkgmake" > "$TMPDIR/pkgmake"
chmod +x "$TMPDIR/pkgmake"

# Share files
info "Baixando arquivos auxiliares..."
mkdir -p "$TMPDIR/share"

for f in autotools.sh cmake.sh python.sh; do
  $DL "$REPO_URL/usr/share/pkgmake/$f" > "$TMPDIR/share/$f"
done

# Configuração
HAS_CONF=0
if $DL "$REPO_URL/etc/pkgmake.conf" > "$TMPDIR/pkgmake.conf" 2>/dev/null; then
  HAS_CONF=1
fi

info "Instalando arquivos..."

# Instala binários
install -Dm755 "$TMPDIR/pkgmake" "$BIN_DIR/pkgmake"

# Instala arquivos de suporte
for f in "$TMPDIR"/share/*; do
  install -Dm644 "$f" "$SHARE_DIR/$(basename "$f")"
done

# Instala configuração (estilo new)
if [[ "$HAS_CONF" -eq 1 ]]; then
  if [[ -f "$CONF_DEST" ]]; then
    info "Configuração existente encontrada em $CONF_DEST"
    info "Instalando nova configuração como ${CONF_DEST}.new"
    install -Dm644 "$TMPDIR/pkgmake.conf" "${CONF_DEST}.new"
  else
    info "Instalando configuração padrão em $CONF_DEST"
    install -Dm644 "$TMPDIR/pkgmake.conf" "$CONF_DEST"
  fi
fi

info "Instalação concluída com sucesso."
info "Execute 'pkgmake --help' para começar."

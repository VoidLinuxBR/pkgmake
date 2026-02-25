#!/bin/bash

# URL do índice de pacotes
INDEX_URL="https://dl.google.com/linux/chrome/deb/dists/stable/main/binary-amd64/Packages.gz"

# Baixa e descompacta o índice
echo "Consultando índice de pacotes..."
PKG_INFO=$(curl -s "$INDEX_URL" | gunzip)

# Extrai versão e nome do arquivo
VERSION=$(echo "$PKG_INFO" | awk '/^Package: google-chrome-stable/{flag=1} flag && /^Version:/{print $2; exit}')
FILENAME=$(echo "$PKG_INFO" | awk '/^Package: google-chrome-stable/{flag=1} flag && /^Filename:/{print $2; exit}')

# Monta URL completa
BASE_URL="https://dl.google.com/linux/chrome/deb"
DEB_URL="$BASE_URL/$FILENAME"

echo "Última versão encontrada: $VERSION"
echo "Baixando pacote: $DEB_URL"

# Baixa o .deb
curl -O "$DEB_URL"

echo "Download concluído: $(basename "$DEB_URL")"

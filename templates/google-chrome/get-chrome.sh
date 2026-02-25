#!/bin/bash

# Arquivo de configuração TOML
CONFIG="chrome.toml"

# Função para extrair valores do TOML
get_value() {
  local key=$1
  grep -E "^$key" "$CONFIG" | cut -d'=' -f2 | tr -d ' "'
}

# Lê os valores do arquivo
mirror=$(get_value "mirror")
pkg=$(get_value "pkg")
suite=$(get_value "suite")
repo=$(get_value "repo")

# URL do índice de pacotes
INDEX_URL="${mirror}dists/${suite}/${repo}/binary-amd64/Packages.gz"

echo "Consultando índice em: $INDEX_URL"

# Baixa e descompacta o índice
PKG_INFO=$(curl -s "$INDEX_URL" | gunzip)

# Extrai versão e nome do arquivo
VERSION=$(echo "$PKG_INFO" | awk '/^Package: '"$pkg"'/{flag=1} flag && /^Version:/{print $2; exit}')
FILENAME=$(echo "$PKG_INFO" | awk '/^Package: '"$pkg"'/{flag=1} flag && /^Filename:/{print $2; exit}')

# Monta URL completa
DEB_URL="${mirror}${FILENAME}"

echo "Última versão encontrada: $VERSION"
echo "Baixando pacote: $DEB_URL"

# Baixa o .deb
curl -O "$DEB_URL"

echo "Download concluído: $(basename "$DEB_URL")"

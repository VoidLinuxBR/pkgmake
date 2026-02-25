build() {
  python3 setup.py build
}

package() {
  python3 setup.py install \
    --root="$PKGDIR" \
    --prefix=/usr \
    --optimize=1
}

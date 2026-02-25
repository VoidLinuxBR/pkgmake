build() {
  ./configure --prefix=/usr
  make
}

package() {
  make DESTDIR="$PKGDIR" install
}

build() {
  cmake -B build -S . \
    -DCMAKE_INSTALL_PREFIX=/usr
  cmake --build build
}

package() {
  DESTDIR="$PKGDIR" cmake --install build
}

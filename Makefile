PREFIX ?= /usr
BINDIR  = $(PREFIX)/bin
ETCDIR  = /etc
SHAREDIR = $(PREFIX)/share/pkgmake
DOCDIR = $(PREFIX)/share/doc/pkgmake

BIN_FILES = usr/bin/pkgmake
ETC_FILES = etc/pkgmake.conf
SHARE_FILES = usr/share/pkgmake/*.sh

all:
	@echo "Nada a compilar. Use: make install"

install:
	install -d $(DESTDIR)$(BINDIR)
	install -d $(ETCDIR)
	install -d $(DESTDIR)$(SHAREDIR)
	install -d $(DESTDIR)$(DOCDIR)

	install -m 755 $(BIN_FILES) $(DESTDIR)$(BINDIR)
	install -m 755 $(ETC_FILES) $(ETCDIR)
	install -m 644 $(SHARE_FILES) $(DESTDIR)$(SHAREDIR)
	install -m 644 README.md $(DESTDIR)$(DOCDIR)/README.md

uninstall:
	rm -f $(DESTDIR)$(BINDIR)/pkgmake
	rm -f $(ETCDIR)/pkgmake.conf
	rm -rf $(DESTDIR)$(SHAREDIR)
	rm -rf $(DESTDIR)$(DOCDIR)

.PHONY: all install uninstall


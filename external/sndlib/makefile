SHELL = /bin/sh
top_srcdir = .

INSTALL = /usr/bin/install -c
prefix = /usr/local
exec_prefix = ${prefix}
datarootdir = ${prefix}/share
bindir = ${exec_prefix}/bin
srcdir = .
mandir = ${datarootdir}/man
libdir = ${exec_prefix}/lib
includedir = ${prefix}/include
pkgconfigdir = $(libdir)/pkgconfig

mkinstalldirs = $(SHELL) $(srcdir)/mkinstalldirs

CC = gcc
DEFS = -DHAVE_CONFIG_H
CFLAGS = -I. -g -O2
LDFLAGS = 
LIBS =  -lm -ldl
JACK_LIBS = 

S7_HEADERS = s7.h
S7_FILES = s7.c
S7_O_FILES = s7.o

XEN_LIBS = 
XEN_CFLAGS = 
AUDIO_LIB = -lasound
GSL_LIBS = 
GSL_FLAGS = 
JACK_FLAGS = 

LDSO_FLAGS = -shared
SO_FLAGS = -fPIC 
SO_INSTALL = install
A_INSTALL = install
SO_LD = gcc
A_LD = ar
A_LD_FLAGS = -rc
LD_FLAGS = -r
SO_NAME = libsndlib.so
RANLIB = :

main_target: sndlib

.c.o:
	$(CC) -c $(DEFS) $(CFLAGS) $(SO_FLAGS) $(XEN_CFLAGS) $(GSL_FLAGS) $(JACK_FLAGS) $<

SNDLIB_HEADERS = sndlib.h sndlib-strings.h vct.h clm.h xen.h sndlib2xen.h clm2xen.h s7.h
SNDLIB_O_FILES = headers.o audio.o io.o sound.o xen.o vct.o clm.o sndlib2xen.o clm2xen.o
SNDLIB_SIMPLE_O_FILES = headers.o audio.o io.o sound.o


sndlib: $(SNDLIB_HEADERS) $(SNDLIB_O_FILES) $(S7_O_FILES)
	$(SO_LD) $(LDFLAGS) $(SNDLIB_O_FILES) $(S7_O_FILES) -o $(SO_NAME) $(LDSO_FLAGS) $(XEN_LIBS) $(AUDIO_LIB) $(GSL_LIBS) $(JACK_FLAGS) $(JACK_LIBS) $(LIBS)
	$(A_LD) $(A_LD_FLAGS) libsndlib.a $(SNDLIB_O_FILES) $(S7_O_FILES)
	$(RANLIB) libsndlib.a

$(SNDLIB_O_FILES): $(SNDLIB_HEADERS)
$(S7_O_FILES): $(S7_HEADERS) $(S7_FILES)


clean:
	rm -f $(SNDLIB_O_FILES)
	rm -f $(S7_O_FILES)

sndplay: $(SNDLIB_HEADERS) $(SNDLIB_O_FILES) sndplay.o
	$(CC) sndplay.c -o sndplay libsndlib.a $(AUDIO_LIB) $(DEFS) $(CFLAGS) $(SO_FLAGS) $(XEN_CFLAGS) $(JACK_FLAGS) $(JACK_LIBS) $(LIBS)

sndinfo: $(SNDLIB_HEADERS) $(SNDLIB_O_FILES) sndinfo.o
	$(CC) sndinfo.c -o sndinfo libsndlib.a $(AUDIO_LIB) $(DEFS) $(CFLAGS) $(SO_FLAGS) $(XEN_CFLAGS) $(JACK_FLAGS) $(JACK_LIBS) $(LIBS) 

audinfo: $(SNDLIB_HEADERS) $(SNDLIB_O_FILES) audinfo.o
	$(CC) audinfo.c -o audinfo libsndlib.a $(AUDIO_LIB) $(DEFS) $(CFLAGS) $(SO_FLAGS) $(XEN_CFLAGS) $(JACK_FLAGS) $(JACK_LIBS) $(LIBS)

install: sndlib
	$(mkinstalldirs) $(bindir)
	$(mkinstalldirs) $(libdir)
	$(mkinstalldirs) $(includedir)
	$(SO_INSTALL) libsndlib.so $(libdir)/libsndlib.so
	$(A_INSTALL) libsndlib.a $(libdir)/libsndlib.a
	$(INSTALL) sndlib.h $(includedir)/sndlib.h
	$(INSTALL) sndlib-config $(bindir)/sndlib-config
	$(INSTALL) sndlib.pc $(pkgconfigdir)/sndlib.pc

uninstall:
	rm -f $(libdir)/libsndlib.so
	rm -f $(libdir)/libsndlib.a

Makefile: Makefile.in config.status
	./config.status

config.status: configure
	./config.status --recheck

configure: configure.in
	cd $(srcdir); autoconf


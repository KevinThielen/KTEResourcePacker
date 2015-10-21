# Makefile for libsndins.so

prefix		= /usr/local
srcdir		= .
libdir		= $(prefix)/lib
top_builddir	= ..
top_srcdir	= ..

includedir	= ${prefix}/include
SHELL		= /bin/bash
mkinstalldirs	= $(SHELL) $(top_srcdir)/mkinstalldirs

CC		= gcc
DEFS		= -DUSE_SND=0 -DHAVE_CONFIG_H
LDFLAGS		= 
CFLAGS		= -I. -g -O2 -fPIC  
LIBS		=  -lm -ldl  

INSTALL		= /usr/bin/install -c
SO_INSTALL	= install
SO_LD		= gcc
A_LD		= ar
A_LD_FLAGS	= cr
LD_FLAGS	= -r
LDSO_FLAGS	= -shared

OBJS		= sndins.o $(top_builddir)/sndlib.a
SO_TARGET	= libsndins.so
A_TARGET	= libsndins.a
LIB_TARGET	= sndins.so

.c.o:
	$(CC) -c $(DEFS) $(CFLAGS) -I$(top_builddir) -I$(top_srcdir) $<

sndins: $(OBJS)
	$(SO_LD) $(LDSO_FLAGS) $(LDFLAGS) -o $(SO_TARGET) $(OBJS) $(LIBS)
	$(A_LD) $(A_LD_FLAGS) $(A_TARGET) $(OBJS)
	ranlib $(A_TARGET)
	cp $(SO_TARGET) $(LIB_TARGET)

install: sndins
	$(mkinstalldirs) $(libdir)
	$(mkinstalldirs) $(includedir)
	$(INSTALL) $(A_TARGET) $(libdir)/$(A_TARGET)
	$(SO_INSTALL) $(SO_TARGET) $(libdir)/$(SO_TARGET)

uninstall:
	rm -f $(libdir)/$(A_TARGET)
	rm -f $(libdir)/$(SO_TARGET)

clean:
	rm -f *.so *.a *.o *.core core

distclean: clean
	rm -f Makefile *~

# Makefile ends here

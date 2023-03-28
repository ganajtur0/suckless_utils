# slstatus version
VERSION = 0

# customize below to fit your system

# paths
PREFIX = /usr/local
MANPREFIX = $(PREFIX)/share/man

X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

# flags
CPPFLAGS = -I$(X11INC) -D_DEFAULT_SOURCE
CFLAGS   = -std=c99 -pedantic -Wall -Wextra -Os `pkg-config --cflags libnotify`
LDFLAGS  = -L$(X11LIB) -s `pkg-config --libs libnotify`
# OpenBSD: add -lsndio
# FreeBSD: add -lkvm
LDLIBS   = -lX11 -lpulse -lm

# compiler and linker
CC = cc

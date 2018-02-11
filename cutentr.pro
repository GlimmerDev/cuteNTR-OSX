#-------------------------------------------------
#
# Project created by QtCreator 2017-01-15T13:50:44
#
#-------------------------------------------------

TARGET = cutentr
TEMPLATE = subdirs
SUBDIRS += src
VERSION = -0.3.1

lessThan(QT_MAJOR_VERSION, 5): error("Qt 5.5 or greater is required.")

isEmpty(PREFIX): PREFIX = /usr/local

desktop.files = setup/gui/cutentr.desktop
desktop.path = $$PREFIX/share/applications
icon.files = setup/gui/cutentr.svg
icon.path = $$PREFIX/share/icons
pixmap.files = resources/linux/icon/cutentr.xpm
pixmap.path = $$PREFIX/share/pixmaps

INSTALLS += desktop icon pixmap

DISTFILES += $$desktop.files \
             $$icon.files \
             $$pixmap.files

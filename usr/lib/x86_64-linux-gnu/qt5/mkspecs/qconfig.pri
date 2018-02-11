#configuration
CONFIG +=  shared qpa no_mocdepend release qt_no_framework
host_build {
    QT_ARCH = x86_64
    QT_TARGET_ARCH = x86_64
} else {
    QT_ARCH = x86_64
    QMAKE_DEFAULT_LIBDIRS = /usr/lib /usr/lib/gcc/x86_64-linux-gnu/6 /usr/lib/x86_64-linux-gnu /lib/x86_64-linux-gnu /lib
    QMAKE_DEFAULT_INCDIRS = /usr/include/c++/6 /usr/include/x86_64-linux-gnu/c++/6 /usr/include/c++/6/backward /usr/lib/gcc/x86_64-linux-gnu/6/include /usr/local/include /usr/lib/gcc/x86_64-linux-gnu/6/include-fixed /usr/include/x86_64-linux-gnu /usr/include
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config release_tools gtk2 gtkstyle fontconfig libudev evdev xkbcommon-evdev libinput xlib xrender xcb-plugin xcb-render xcb-glx xcb-xlib xcb-sm accessibility-atspi-bridge gbm linuxfb kms c++11 c++14 c++1z accessibility egl egl_x11 eglfs eglfs_gbm opengl shared qpa reduce_exports reduce_relocations clock-gettime clock-monotonic posix_fallocate mremap getaddrinfo ipv6ifname getifaddrs inotify eventfd threadsafe-cloexec system-jpeg system-png png system-freetype system-harfbuzz system-zlib mtdev nis cups iconv glib dbus dbus-linked openssl libproxy xcb xinput2 alsa pulseaudio gstreamer-1.0 icu concurrent audio-backend release

#versioning
QT_VERSION = 5.6.1
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 6
QT_PATCH_VERSION = 1

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

QT_EDITION = OpenSource

QT_COMPILER_STDCXX = 201402
QT_GCC_MAJOR_VERSION = 6
QT_GCC_MINOR_VERSION = 2
QT_GCC_PATCH_VERSION = 0

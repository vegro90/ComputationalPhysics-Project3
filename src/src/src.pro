TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    satellite.cpp \
    vec3.cpp \
    solarsystem.cpp

HEADERS += \
    satellite.h \
    vec3.h \
    solarsystem.h


DISTFILES += \

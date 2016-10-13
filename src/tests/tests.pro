TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../src/satellite.cpp \ 
    satellite_test.cpp

HEADERS += \
    ../src/satellite.h \
    catch.hpp

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    datastore.cpp \
    a.cpp \
    b.cpp \
    c.cpp

HEADERS += \
    dataset.h \
    datastore.h \
    a.h \
    b.h \
    c.h

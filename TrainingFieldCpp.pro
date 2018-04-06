TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    person.cpp \
    company.cpp \
    contacts.cpp

HEADERS += \
    person.h \
    company.h \
    contacts.h

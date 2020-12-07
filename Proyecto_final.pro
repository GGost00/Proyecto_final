QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    armas.cpp \
    checkpoint.cpp \
    main.cpp \
    mainwindow.cpp \
    mapa.cpp \
    obstaculos.cpp \
    personajes.cpp \
    portales.cpp \
    power_up.cpp \
    proyectil.cpp \
    vida.cpp

HEADERS += \
    armas.h \
    checkpoint.h \
    mainwindow.h \
    mapa.h \
    obstaculos.h \
    personajes.h \
    portales.h \
    power_up.h \
    proyectil.h \
    vida.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recursos.qrc

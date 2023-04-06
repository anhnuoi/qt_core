QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        animal.cpp \
        destination.cpp \
        main.cpp \
        q_property.cpp \
        q_property_watch.cpp \
        radio.cpp \
        source.cpp \
        station.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    animal.h \
    destination.h \
    generic.h \
    q_property.h \
    q_property_watch.h \
    radio.h \
    source.h \
    station.h

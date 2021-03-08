QT += quick

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        bico_qbackendthread.cpp \
        bico_qbackendthread_example.cpp \
        bico_qmessdata.cpp \
        bico_qthread.cpp \
        bico_quithread.cpp \
        bico_quithread_example.cpp \
        main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    bico_qbackendthread.h \
    bico_qbackendthread_example.h \
    bico_qmessdata.h \
    bico_qmutexqueue.h \
    bico_qthread.h \
    bico_quithread.h \
    bico_quithread_example.h

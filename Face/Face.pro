#-------------------------------------------------
#
# Project created by QtCreator 2017-11-10T12:31:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Face
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    utils.cpp \
    recognize.cpp \
    roundprogressbar.cpp

HEADERS += \
        mainwindow.h \
    utils.h \
    inc/SeetaFace.h \
    roundprogressbar.h

FORMS += \
        mainwindow.ui

INCLUDEPATH += /usr/local/include \
                /usr/local/include/opencv \
                /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
        /usr/local/lib/libopencv_core.so    \
        /usr/local/lib/libopencv_imgproc.so \
        /usr/local/lib/libopencv_features2d.so\
        /usr/local/lib/libopencv_videoio.so\
        /usr/local/lib/libopencv_imgcodecs.so\
        /home/wj/Qt/SeetaFaceEngine-master/FaceIdentification/build/libviplnet.so.4.5

unix:!macx: LIBS += -L$$PWD/lib/ -lseeta_facedet_lib

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

unix:!macx: LIBS += -L$$PWD/lib/ -lseeta_fa_lib

RESOURCES += \
    palette.qrc

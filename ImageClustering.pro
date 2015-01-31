#-------------------------------------------------
#
# Project created by QtCreator 2015-01-25T19:25:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImageClustering
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    ImageWidget.cpp

HEADERS  += MainWindow.h \
    ImageWidget.h

FORMS    += MainWindow.ui \
    ImageWidget.ui

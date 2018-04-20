#-------------------------------------------------
#
# Project created by QtCreator 2018-04-19T16:47:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Social-Network-Qt-Application-GUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
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
    newaccount.cpp \
    homepage.cpp \
    profilepage.cpp \
    addcomment.cpp

HEADERS += \
        mainwindow.h \
    newaccount.h \
    homepage.h \
    profilepage.h \
    addcomment.h \
    comments.h \
    posts.h

FORMS += \
        mainwindow.ui \
    newaccount.ui \
    homepage.ui \
    profilepage.ui \
    addcomment.ui

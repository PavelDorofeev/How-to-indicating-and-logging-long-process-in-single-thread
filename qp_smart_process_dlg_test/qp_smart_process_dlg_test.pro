#-------------------------------------------------
#
# Project created by QtCreator 2024-02-09T13:30:04
#
#-------------------------------------------------

QT       += core gui sql

TARGET = smart_process_dlg_test
TEMPLATE = app

INCLUDEPATH += ../

include (../qp/meta/qp_meta.pri)
include (../qp/gui/qp_gui.pri)

OBJECTS_DIR     = tmp\\obj\\$$out_dir
MOC_DIR         = tmp\\moc\\$$out_dir
RCC_DIR         = tmp\\rcc\\$$out_dir
UI_DIR          = ui



SOURCES += main.cpp\
        dialog.cpp \
    longoperationsclass.cpp

HEADERS  += dialog.h \
    longoperationsclass.h

FORMS    += dialog.ui

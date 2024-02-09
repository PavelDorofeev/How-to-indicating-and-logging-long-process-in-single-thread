#include <QtGui/QApplication>
#include "dialog.h"
#include <QDebug>

const QString add_QDialog_Styles()
{
    // Dialog  is not working

    return
            "QDialog{\n"\
            "   padding:1em;\n"\
            "   background: rgb(229, 255, 235);\n"\
            "}\n"\

            "Smart_Process_Dlg{\n"\
            "   padding:1em;\n"\
            "   background: white;\n"\
            "   min-height: 700px;\n"\
            "   max-height: 800px;\n"\
            "   min-width: 500px;\n"\
            "   max-width: 800px;\n"\
            "}\n";

}
const QString add_dialogTopFrame_Styles()
{
    return

            "#dialogTopFrame{\n"\
            "   background: #eef;\n"\
            "   border-radius:5px;\n"\

            "   border:5px solid darkgray;\n"\
            "   color:#888888 ;\n"\
            "}\n"\

            "#btn_call_test{\n"\
            "   padding:3em;\n"\
            "   font-weight:900;\n"\
            "   font-size:55;\n"\
            "   background: rgb(255, 255, 255);\n"\
            "   outline:none;\n"\
            "}\n"\
            ;

}

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    app.setStyleSheet( add_QDialog_Styles()
                       + add_dialogTopFrame_Styles());

    qDebug() << app.styleSheet();

    Dialog w;

    w.showMaximized();
    
    return app.exec();
}

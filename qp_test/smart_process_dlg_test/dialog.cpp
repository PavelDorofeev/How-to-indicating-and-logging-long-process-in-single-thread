#include "dialog.h"
#include "ui_dialog.h"
#include "longoperationsclass.h"
#include <QDebug>
#include <QDesktopWidget>
#include <QDesktopServices>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    locl = new LongOperationsClass( this );

    //---------------------- move to center ------------------------------

    int screenH = QApplication::desktop()->screenGeometry().height();
    int screenH_07 = (int)screenH *0.7;

    int AppFntHeight = QApplication::fontMetrics().height();

    int hh = qMin( screenH_07 , AppFntHeight * 30 );

    int screenW_05 = (int)hh *0.5;

    int ww = qMin( screenW_05 , AppFntHeight * 30 );


    QRect rectDlg( 0, 0, width(), height() );		// Window rectangle

    QPoint screenCenter = QApplication::desktop()->screenGeometry().center();

    QPoint to = screenCenter - rectDlg.center() ;

    move( to );

    //----------------------------------------------

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_call_test_clicked()
{
    QVariant retVal;

    bool resInvokeMethod =  qp_gui::call_slot( this ,

                                               locl ,

                                               "Test task",

                                               QString("Demonstration of log process ..."),

                                               "Waiting please, process is working...",

                                               "slot_test",

                                               QList<QObject*>() << locl ,

                                               QList<QVariant>() ,

                                               retVal,

                                               false // dont closee process iniaction window with finished signal

                                               );

    if( ! resInvokeMethod )
        return;

    qDebug()<<retVal;

}

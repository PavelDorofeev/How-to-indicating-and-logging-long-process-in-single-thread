#include "longoperationsclass.h"
#include <QCoreApplication>
#include <QTime>


LongOperationsClass::LongOperationsClass(QObject *parent)
    :
    QObject(parent)
{

}

QVariant LongOperationsClass::slot_test()
{
    QTime dieTime= QTime::currentTime().addSecs(1);

    for( int cnt=0; cnt < 10; cnt++)
    {
        emit sig_log(QString("step %1 send:...").arg( cnt), qp_gui::LOG_STYLE_SEND);

        delay(1);

        emit sig_log(QString("step %1 receive:...").arg( cnt), qp_gui::LOG_STYLE_RECEIVE);
        //delay(1);

    }

    emit sig_finished("Finished successful ", false );

    return 123;

}


void LongOperationsClass::delay(int sec)
{
    QTime dieTime= QTime::currentTime().addSecs(sec);

    while (QTime::currentTime() < dieTime)

        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

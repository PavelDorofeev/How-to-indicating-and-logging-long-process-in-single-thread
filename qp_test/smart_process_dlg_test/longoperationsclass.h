#ifndef LONGOPERATIONSCLASS_H
#define LONGOPERATIONSCLASS_H

#include <QObject>
#include <QVariant>
#include "../../qp/gui/qp_gui.h"

class LongOperationsClass : public QObject
{
    Q_OBJECT
public:
    explicit LongOperationsClass(QObject *parent = 0);
    

signals:

    void sig_log(const QString &, qp_gui::LOG_STYLE );
    void sig_finished(const QString &, bool error);
    
public slots:

    QVariant slot_test();

private:

    void delay(int sec);

};

#endif // LONGOPERATIONSCLASS_H

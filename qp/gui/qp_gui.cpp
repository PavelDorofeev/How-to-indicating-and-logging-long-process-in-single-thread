#include "qp_gui.h"

#include <QApplication>
#include "smart_process_dlg.h"

namespace qp_gui
{

QString styleToHtmlAttr(LOG_STYLE style)
{
    if(style == LOG_STYLE_SEND )
        return "color:blue;";

    else if(style == LOG_STYLE_RECEIVE )
        return "color:green;";

    else if(style == LOG_STYLE_ERROR )
        return "color:red;";

    else

        return "";


}

bool call_slot( QWidget *parent,
                QObject * slotOwner,
                const QString &hdr,
                const QString &txt1,
                const QString &txt2,
                const QString &slot_name ,
                const QList<QObject*> &ObjLst,
                const QList<QVariant>& pars,
                QVariant &retVal,
                bool closeWindowOnFinished
                )
{

    Smart_Process_Dlg * dlg = new Smart_Process_Dlg( parent ,

                                                     slotOwner ,

                                                     hdr,

                                                     txt1,

                                                     txt2,

                                                     slot_name,

                                                     ObjLst,

                                                     pars,

                                                     closeWindowOnFinished
                                                     );


    if ( dlg->exec() == QDialog::Rejected ) //

        ;

    retVal = dlg->getRetValue();

    bool res = dlg->getInvokeMethodResult();

    delete dlg;

    QApplication::setOverrideCursor( Qt::ArrowCursor );

    return res;

}

}

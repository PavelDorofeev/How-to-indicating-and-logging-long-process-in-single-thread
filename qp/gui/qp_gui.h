#ifndef QP_GUI_H
#define QP_GUI_H

#include <QWidget>

// --------------------------------------------------------------------------------------
Q_CORE_EXPORT void qt_assert(const char *assertion, const char *file, int line);

//  our QP_ASSERT run in release building too !!!
#if !defined(QP_ASSERT)
#    define QP_ASSERT(cond) ((!(cond)) ? qt_assert(#cond,__FILE__,__LINE__) : qt_noop())
#endif
// --------------------------------------------------------------------------------------

namespace qp_gui
{

    enum LOG_STYLE{
        LOG_STYLE_SEND=0,
        LOG_STYLE_RECEIVE,
        LOG_STYLE_ERROR,
        LOG_STYLE_PLAINTEXT
    };

QString styleToHtmlAttr(LOG_STYLE stl);

bool call_slot(
        QWidget *parent, // this is parent
        QObject * slotOwner,
        const QString &hdr,
        const QString &txt1,
        const QString &txt2,
        const QString &slot_name ,
        const QList<QObject*> &ObjLst,
        const QList<QVariant>& pars,
        QVariant &retVal,
        bool closeWindowOnFinish = true
        );

}
#endif // QP_GUI_H

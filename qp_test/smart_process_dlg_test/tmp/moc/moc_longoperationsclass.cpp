/****************************************************************************
** Meta object code from reading C++ file 'longoperationsclass.h'
**
** Created: Fri 9. Feb 18:25:12 2024
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../longoperationsclass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'longoperationsclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LongOperationsClass[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   21,   20,   20, 0x05,
      65,   58,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   20,   92,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LongOperationsClass[] = {
    "LongOperationsClass\0\0,\0"
    "sig_log(QString,qp_gui::LOG_STYLE)\0"
    ",error\0sig_finished(QString,bool)\0"
    "QVariant\0slot_test()\0"
};

void LongOperationsClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LongOperationsClass *_t = static_cast<LongOperationsClass *>(_o);
        switch (_id) {
        case 0: _t->sig_log((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qp_gui::LOG_STYLE(*)>(_a[2]))); break;
        case 1: _t->sig_finished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: { QVariant _r = _t->slot_test();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LongOperationsClass::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LongOperationsClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LongOperationsClass,
      qt_meta_data_LongOperationsClass, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LongOperationsClass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LongOperationsClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LongOperationsClass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LongOperationsClass))
        return static_cast<void*>(const_cast< LongOperationsClass*>(this));
    return QObject::qt_metacast(_clname);
}

int LongOperationsClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LongOperationsClass::sig_log(const QString & _t1, qp_gui::LOG_STYLE _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LongOperationsClass::sig_finished(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

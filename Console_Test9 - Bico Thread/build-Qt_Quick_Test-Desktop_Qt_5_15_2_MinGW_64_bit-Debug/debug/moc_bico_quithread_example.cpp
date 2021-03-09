/****************************************************************************
** Meta object code from reading C++ file 'bico_quithread_example.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Qt_Quick_Test/bico_quithread_example.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bico_quithread_example.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Bico_QUIThread_Example_t {
    QByteArrayData data[5];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Bico_QUIThread_Example_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Bico_QUIThread_Example_t qt_meta_stringdata_Bico_QUIThread_Example = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Bico_QUIThread_Example"
QT_MOC_LITERAL(1, 23, 4), // "test"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "mess"
QT_MOC_LITERAL(4, 34, 4) // "data"

    },
    "Bico_QUIThread_Example\0test\0\0mess\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Bico_QUIThread_Example[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

       0        // eod
};

void Bico_QUIThread_Example::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bico_QUIThread_Example *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Bico_QUIThread_Example::staticMetaObject = { {
    QMetaObject::SuperData::link<Bico_QUIThread::staticMetaObject>(),
    qt_meta_stringdata_Bico_QUIThread_Example.data,
    qt_meta_data_Bico_QUIThread_Example,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Bico_QUIThread_Example::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bico_QUIThread_Example::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Bico_QUIThread_Example.stringdata0))
        return static_cast<void*>(this);
    return Bico_QUIThread::qt_metacast(_clname);
}

int Bico_QUIThread_Example::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Bico_QUIThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

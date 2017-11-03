/****************************************************************************
** Meta object code from reading C++ file 'qpython.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ownNotes/src/qpython.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpython.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPython_t {
    QByteArrayData data[20];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPython_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPython_t qt_meta_stringdata_QPython = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QPython"
QT_MOC_LITERAL(1, 8, 8), // "finished"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "message"
QT_MOC_LITERAL(4, 26, 4), // "data"
QT_MOC_LITERAL(5, 31, 9), // "exception"
QT_MOC_LITERAL(6, 41, 4), // "type"
QT_MOC_LITERAL(7, 46, 20), // "threadedCallFinished"
QT_MOC_LITERAL(8, 67, 23), // "threadedCallResultReady"
QT_MOC_LITERAL(9, 91, 5), // "index"
QT_MOC_LITERAL(10, 97, 13), // "addImportPath"
QT_MOC_LITERAL(11, 111, 4), // "path"
QT_MOC_LITERAL(12, 116, 12), // "importModule"
QT_MOC_LITERAL(13, 129, 4), // "name"
QT_MOC_LITERAL(14, 134, 8), // "evaluate"
QT_MOC_LITERAL(15, 143, 4), // "expr"
QT_MOC_LITERAL(16, 148, 4), // "call"
QT_MOC_LITERAL(17, 153, 4), // "func"
QT_MOC_LITERAL(18, 158, 4), // "args"
QT_MOC_LITERAL(19, 163, 12) // "threadedCall"

    },
    "QPython\0finished\0\0message\0data\0exception\0"
    "type\0threadedCallFinished\0"
    "threadedCallResultReady\0index\0"
    "addImportPath\0path\0importModule\0name\0"
    "evaluate\0expr\0call\0func\0args\0threadedCall"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPython[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    2,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   73,    2, 0x0a /* Public */,
       8,    1,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   77,    2, 0x02 /* Public */,
      12,    1,   80,    2, 0x02 /* Public */,
      14,    1,   83,    2, 0x02 /* Public */,
      16,    2,   86,    2, 0x02 /* Public */,
      19,    2,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Bool, QMetaType::QString,   13,
    QMetaType::QVariant, QMetaType::QString,   15,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   17,   18,

       0        // eod
};

void QPython::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPython *_t = static_cast<QPython *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->message((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->exception((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->threadedCallFinished(); break;
        case 4: _t->threadedCallResultReady((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addImportPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->importModule((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->evaluate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->call((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: _t->threadedCall((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPython::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPython::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPython::*_t)(const QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPython::message)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPython::*_t)(const QString , const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPython::exception)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QPython::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPython.data,
      qt_meta_data_QPython,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPython::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPython::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPython.stringdata0))
        return static_cast<void*>(const_cast< QPython*>(this));
    return QObject::qt_metacast(_clname);
}

int QPython::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QPython::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QPython::message(const QVariant _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPython::exception(const QString _t1, const QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

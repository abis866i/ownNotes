/****************************************************************************
** Meta object code from reading C++ file 'documenthandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ownNotes/src/documenthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documenthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DocumentHandler_t {
    QByteArrayData data[21];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentHandler_t qt_meta_stringdata_DocumentHandler = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DocumentHandler"
QT_MOC_LITERAL(1, 16, 13), // "targetChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(4, 53, 21), // "selectionStartChanged"
QT_MOC_LITERAL(5, 75, 19), // "selectionEndChanged"
QT_MOC_LITERAL(6, 95, 11), // "textChanged"
QT_MOC_LITERAL(7, 107, 7), // "setText"
QT_MOC_LITERAL(8, 115, 3), // "arg"
QT_MOC_LITERAL(9, 119, 8), // "setStyle"
QT_MOC_LITERAL(10, 128, 12), // "primaryColor"
QT_MOC_LITERAL(11, 141, 14), // "secondaryColor"
QT_MOC_LITERAL(12, 156, 14), // "highlightColor"
QT_MOC_LITERAL(13, 171, 23), // "secondaryHighlightColor"
QT_MOC_LITERAL(14, 195, 19), // "m_baseFontPointSize"
QT_MOC_LITERAL(15, 215, 6), // "target"
QT_MOC_LITERAL(16, 222, 11), // "QQuickItem*"
QT_MOC_LITERAL(17, 234, 14), // "cursorPosition"
QT_MOC_LITERAL(18, 249, 14), // "selectionStart"
QT_MOC_LITERAL(19, 264, 12), // "selectionEnd"
QT_MOC_LITERAL(20, 277, 4) // "text"

    },
    "DocumentHandler\0targetChanged\0\0"
    "cursorPositionChanged\0selectionStartChanged\0"
    "selectionEndChanged\0textChanged\0setText\0"
    "arg\0setStyle\0primaryColor\0secondaryColor\0"
    "highlightColor\0secondaryHighlightColor\0"
    "m_baseFontPointSize\0target\0QQuickItem*\0"
    "cursorPosition\0selectionStart\0"
    "selectionEnd\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   54,    2, 0x0a /* Public */,
       9,    5,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QReal,   10,   11,   12,   13,   14,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0049510b,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void DocumentHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocumentHandler *_t = static_cast<DocumentHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->cursorPositionChanged(); break;
        case 2: _t->selectionStartChanged(); break;
        case 3: _t->selectionEndChanged(); break;
        case 4: _t->textChanged(); break;
        case 5: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setStyle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DocumentHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentHandler::targetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DocumentHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentHandler::cursorPositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DocumentHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentHandler::selectionStartChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DocumentHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentHandler::selectionEndChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DocumentHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentHandler::textChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DocumentHandler *_t = static_cast<DocumentHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->selectionStart(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->selectionEnd(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DocumentHandler *_t = static_cast<DocumentHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSelectionStart(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSelectionEnd(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DocumentHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DocumentHandler.data,
      qt_meta_data_DocumentHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DocumentHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentHandler.stringdata0))
        return static_cast<void*>(const_cast< DocumentHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int DocumentHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DocumentHandler::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DocumentHandler::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DocumentHandler::selectionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DocumentHandler::selectionEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DocumentHandler::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

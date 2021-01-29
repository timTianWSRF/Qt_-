/****************************************************************************
** Meta object code from reading C++ file 'second.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../second.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'second.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_second_t {
    QByteArrayData data[18];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_second_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_second_t qt_meta_stringdata_second = {
    {
QT_MOC_LITERAL(0, 0, 6), // "second"
QT_MOC_LITERAL(1, 7, 3), // "CAL"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 3), // "One"
QT_MOC_LITERAL(4, 16, 3), // "Two"
QT_MOC_LITERAL(5, 20, 5), // "Three"
QT_MOC_LITERAL(6, 26, 4), // "Four"
QT_MOC_LITERAL(7, 31, 4), // "Five"
QT_MOC_LITERAL(8, 36, 3), // "Six"
QT_MOC_LITERAL(9, 40, 5), // "Seven"
QT_MOC_LITERAL(10, 46, 5), // "Eight"
QT_MOC_LITERAL(11, 52, 4), // "Nine"
QT_MOC_LITERAL(12, 57, 4), // "Zero"
QT_MOC_LITERAL(13, 62, 4), // "Plus"
QT_MOC_LITERAL(14, 67, 5), // "Minus"
QT_MOC_LITERAL(15, 73, 5), // "Cheng"
QT_MOC_LITERAL(16, 79, 3), // "Chu"
QT_MOC_LITERAL(17, 83, 5) // "Clear"

    },
    "second\0CAL\0\0One\0Two\0Three\0Four\0Five\0"
    "Six\0Seven\0Eight\0Nine\0Zero\0Plus\0Minus\0"
    "Cheng\0Chu\0Clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_second[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void second::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        second *_t = static_cast<second *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CAL(); break;
        case 1: _t->One(); break;
        case 2: _t->Two(); break;
        case 3: _t->Three(); break;
        case 4: _t->Four(); break;
        case 5: _t->Five(); break;
        case 6: _t->Six(); break;
        case 7: _t->Seven(); break;
        case 8: _t->Eight(); break;
        case 9: _t->Nine(); break;
        case 10: _t->Zero(); break;
        case 11: _t->Plus(); break;
        case 12: _t->Minus(); break;
        case 13: _t->Cheng(); break;
        case 14: _t->Chu(); break;
        case 15: _t->Clear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject second::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_second.data,
      qt_meta_data_second,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *second::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *second::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_second.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int second::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

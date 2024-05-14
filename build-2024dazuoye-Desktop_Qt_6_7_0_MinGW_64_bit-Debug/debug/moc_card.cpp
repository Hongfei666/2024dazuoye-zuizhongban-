/****************************************************************************
** Meta object code from reading C++ file 'card.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../2024dazuoye/card.h"
<<<<<<< HEAD
=======
#include <QtGui/qtextcursor.h>
>>>>>>> b209066 (“提交代码”)
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'card.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCardENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCardENDCLASS = QtMocHelpers::stringData(
    "Card",
    "play",
<<<<<<< HEAD
    ""
=======
    "",
    "jiaoyi"
>>>>>>> b209066 (“提交代码”)
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCardENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
       1,   14, // methods
=======
       2,   14, // methods
>>>>>>> b209066 (“提交代码”)
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
<<<<<<< HEAD
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,
=======
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    0,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
>>>>>>> b209066 (“提交代码”)

       0        // eod
};

Q_CONSTINIT const QMetaObject Card::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSCardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Card, std::true_type>,
        // method 'play'
<<<<<<< HEAD
=======
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jiaoyi'
>>>>>>> b209066 (“提交代码”)
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Card::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Card *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->play(); break;
<<<<<<< HEAD
=======
        case 1: _t->jiaoyi(); break;
>>>>>>> b209066 (“提交代码”)
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Card::*)();
            if (_t _q_method = &Card::play; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
<<<<<<< HEAD
=======
        {
            using _t = void (Card::*)();
            if (_t _q_method = &Card::jiaoyi; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
>>>>>>> b209066 (“提交代码”)
    }
    (void)_a;
}

const QMetaObject *Card::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Card::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Card::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
<<<<<<< HEAD
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
=======
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
>>>>>>> b209066 (“提交代码”)
    }
    return _id;
}

// SIGNAL 0
void Card::play()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
<<<<<<< HEAD
=======

// SIGNAL 1
void Card::jiaoyi()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
>>>>>>> b209066 (“提交代码”)
QT_WARNING_POP

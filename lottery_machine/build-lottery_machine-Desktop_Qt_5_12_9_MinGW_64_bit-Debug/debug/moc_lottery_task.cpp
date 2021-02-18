/****************************************************************************
** Meta object code from reading C++ file 'lottery_task.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lottery_machine/lottery_task.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lottery_task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lottery_Task_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lottery_Task_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lottery_Task_t qt_meta_stringdata_Lottery_Task = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Lottery_Task"
QT_MOC_LITERAL(1, 13, 13), // "selected_info"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "show_info"
QT_MOC_LITERAL(4, 38, 11), // "onSignalRun"
QT_MOC_LITERAL(5, 50, 12) // "onSignalStop"

    },
    "Lottery_Task\0selected_info\0\0show_info\0"
    "onSignalRun\0onSignalStop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lottery_Task[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Lottery_Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lottery_Task *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected_info((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->show_info((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onSignalRun(); break;
        case 3: _t->onSignalStop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Lottery_Task::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Lottery_Task::selected_info)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Lottery_Task::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Lottery_Task::show_info)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lottery_Task::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_Lottery_Task.data,
    qt_meta_data_Lottery_Task,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lottery_Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lottery_Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lottery_Task.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Lottery_Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Lottery_Task::selected_info(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Lottery_Task::show_info(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'Search_Engine_GUI.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Search_Engine_GUI.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Search_Engine_GUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Search_Engine_GUI_t {
    const uint offsetsAndSize[36];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Search_Engine_GUI_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Search_Engine_GUI_t qt_meta_stringdata_Search_Engine_GUI = {
    {
QT_MOC_LITERAL(0, 17), // "Search_Engine_GUI"
QT_MOC_LITERAL(18, 25), // "on_treeView_doubleClicked"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 11), // "QModelIndex"
QT_MOC_LITERAL(57, 5), // "index"
QT_MOC_LITERAL(63, 18), // "on_LoadDir_clicked"
QT_MOC_LITERAL(82, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(108, 19), // "on_LoadFile_clicked"
QT_MOC_LITERAL(128, 27), // "on_listView_2_doubleClicked"
QT_MOC_LITERAL(156, 18), // "on_DelFile_clicked"
QT_MOC_LITERAL(175, 18), // "on_AddFile_clicked"
QT_MOC_LITERAL(194, 12), // "displayFiles"
QT_MOC_LITERAL(207, 5), // "mPath"
QT_MOC_LITERAL(213, 9), // "addResult"
QT_MOC_LITERAL(223, 4), // "rank"
QT_MOC_LITERAL(228, 4), // "name"
QT_MOC_LITERAL(233, 5), // "score"
QT_MOC_LITERAL(239, 21) // "on_ShowResult_clicked"

    },
    "Search_Engine_GUI\0on_treeView_doubleClicked\0"
    "\0QModelIndex\0index\0on_LoadDir_clicked\0"
    "on_listView_doubleClicked\0on_LoadFile_clicked\0"
    "on_listView_2_doubleClicked\0"
    "on_DelFile_clicked\0on_AddFile_clicked\0"
    "displayFiles\0mPath\0addResult\0rank\0"
    "name\0score\0on_ShowResult_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Search_Engine_GUI[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x08,    0 /* Private */,
       5,    0,   77,    2, 0x08,    2 /* Private */,
       6,    1,   78,    2, 0x08,    3 /* Private */,
       7,    0,   81,    2, 0x08,    5 /* Private */,
       8,    1,   82,    2, 0x08,    6 /* Private */,
       9,    0,   85,    2, 0x08,    8 /* Private */,
      10,    0,   86,    2, 0x08,    9 /* Private */,
      11,    1,   87,    2, 0x08,   10 /* Private */,
      13,    3,   90,    2, 0x08,   12 /* Private */,
      17,    0,   97,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   16,
    QMetaType::Void,

       0        // eod
};

void Search_Engine_GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Search_Engine_GUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_treeView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_LoadDir_clicked(); break;
        case 2: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_LoadFile_clicked(); break;
        case 4: _t->on_listView_2_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_DelFile_clicked(); break;
        case 6: _t->on_AddFile_clicked(); break;
        case 7: _t->displayFiles((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->addResult((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->on_ShowResult_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Search_Engine_GUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Search_Engine_GUI.offsetsAndSize,
    qt_meta_data_Search_Engine_GUI,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Search_Engine_GUI_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Search_Engine_GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Search_Engine_GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Search_Engine_GUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Search_Engine_GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

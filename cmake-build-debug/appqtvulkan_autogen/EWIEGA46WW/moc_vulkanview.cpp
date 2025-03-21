/****************************************************************************
** Meta object code from reading C++ file 'vulkanview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../vulkanview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vulkanview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSVulkanViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVulkanViewENDCLASS = QtMocHelpers::stringData(
    "VulkanView",
    "QML.Element",
    "auto",
    "sync",
    "",
    "cleanup",
    "handleWindowChanged",
    "QQuickWindow*",
    "win"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVulkanViewENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[5];
    char stringdata4[1];
    char stringdata5[8];
    char stringdata6[20];
    char stringdata7[14];
    char stringdata8[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVulkanViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVulkanViewENDCLASS_t qt_meta_stringdata_CLASSVulkanViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "VulkanView"
        QT_MOC_LITERAL(11, 11),  // "QML.Element"
        QT_MOC_LITERAL(23, 4),  // "auto"
        QT_MOC_LITERAL(28, 4),  // "sync"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 7),  // "cleanup"
        QT_MOC_LITERAL(42, 19),  // "handleWindowChanged"
        QT_MOC_LITERAL(62, 13),  // "QQuickWindow*"
        QT_MOC_LITERAL(76, 3)   // "win"
    },
    "VulkanView",
    "QML.Element",
    "auto",
    "sync",
    "",
    "cleanup",
    "handleWindowChanged",
    "QQuickWindow*",
    "win"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVulkanViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   34,    4, 0x0a,    1 /* Public */,
       5,    0,   35,    4, 0x0a,    2 /* Public */,
       6,    1,   36,    4, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject VulkanView::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSVulkanViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVulkanViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        VulkanView,
        // method 'sync'
        void,
        // method 'cleanup'
        void,
        // method 'handleWindowChanged'
        void,
        QQuickWindow *
    >,
    nullptr
} };

void VulkanView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VulkanView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sync(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->handleWindowChanged((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickWindow* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *VulkanView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VulkanView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVulkanViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int VulkanView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP

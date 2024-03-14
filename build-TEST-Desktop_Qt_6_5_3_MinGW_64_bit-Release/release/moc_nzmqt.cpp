/****************************************************************************
** Meta object code from reading C++ file 'nzmqt.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/nzmqt/nzmqt.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nzmqt.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS = QtMocHelpers::stringData(
    "nzmqt::ZMQSocket",
    "messageReceived",
    "",
    "close",
    "sendMessage",
    "bytes_",
    "nzmqt::ZMQSocket::SendFlags",
    "flags_",
    "msg_",
    "Type",
    "TYP_PUB",
    "TYP_SUB",
    "TYP_PUSH",
    "TYP_PULL",
    "TYP_REQ",
    "TYP_REP",
    "TYP_DEALER",
    "TYP_ROUTER",
    "TYP_PAIR",
    "TYP_XPUB",
    "TYP_XSUB",
    "Event",
    "EVT_POLLIN",
    "EVT_POLLOUT",
    "EVT_POLLERR",
    "Events",
    "SendFlag",
    "SND_MORE",
    "SND_DONTWAIT",
    "SendFlags",
    "ReceiveFlag",
    "RCV_DONTWAIT",
    "ReceiveFlags",
    "Option",
    "OPT_TYPE",
    "OPT_RCVMORE",
    "OPT_FD",
    "OPT_EVENTS",
    "OPT_MAXMSGSIZE",
    "OPT_SUBSCRIBE",
    "OPT_UNSUBSCRIBE",
    "OPT_IMMEDIATE",
    "OPT_REQ_CORRELATE",
    "OPT_REQ_RELAXED",
    "OPT_AFFINITY",
    "OPT_IDENTITY",
    "OPT_RATE",
    "OPT_RECOVERY_IVL",
    "OPT_SNDBUF",
    "OPT_RCVBUF",
    "OPT_LINGER",
    "OPT_RECONNECT_IVL",
    "OPT_RECONNECT_IVL_MAX",
    "OPT_BACKLOG",
    "OPT_SNDHWM",
    "OPT_RCVHWM",
    "OPT_SNDTIMEO",
    "OPT_RCVTIMEO",
    "OPT_IPV6",
    "OPT_CONFLATE",
    "OPT_TOS"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS_t {
    uint offsetsAndSizes[122];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[7];
    char stringdata6[28];
    char stringdata7[7];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[8];
    char stringdata15[8];
    char stringdata16[11];
    char stringdata17[11];
    char stringdata18[9];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[6];
    char stringdata22[11];
    char stringdata23[12];
    char stringdata24[12];
    char stringdata25[7];
    char stringdata26[9];
    char stringdata27[9];
    char stringdata28[13];
    char stringdata29[10];
    char stringdata30[12];
    char stringdata31[13];
    char stringdata32[13];
    char stringdata33[7];
    char stringdata34[9];
    char stringdata35[12];
    char stringdata36[7];
    char stringdata37[11];
    char stringdata38[15];
    char stringdata39[14];
    char stringdata40[16];
    char stringdata41[14];
    char stringdata42[18];
    char stringdata43[16];
    char stringdata44[13];
    char stringdata45[13];
    char stringdata46[9];
    char stringdata47[17];
    char stringdata48[11];
    char stringdata49[11];
    char stringdata50[11];
    char stringdata51[18];
    char stringdata52[22];
    char stringdata53[12];
    char stringdata54[11];
    char stringdata55[11];
    char stringdata56[13];
    char stringdata57[13];
    char stringdata58[9];
    char stringdata59[13];
    char stringdata60[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS_t qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "nzmqt::ZMQSocket"
        QT_MOC_LITERAL(17, 15),  // "messageReceived"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 5),  // "close"
        QT_MOC_LITERAL(40, 11),  // "sendMessage"
        QT_MOC_LITERAL(52, 6),  // "bytes_"
        QT_MOC_LITERAL(59, 27),  // "nzmqt::ZMQSocket::SendFlags"
        QT_MOC_LITERAL(87, 6),  // "flags_"
        QT_MOC_LITERAL(94, 4),  // "msg_"
        QT_MOC_LITERAL(99, 4),  // "Type"
        QT_MOC_LITERAL(104, 7),  // "TYP_PUB"
        QT_MOC_LITERAL(112, 7),  // "TYP_SUB"
        QT_MOC_LITERAL(120, 8),  // "TYP_PUSH"
        QT_MOC_LITERAL(129, 8),  // "TYP_PULL"
        QT_MOC_LITERAL(138, 7),  // "TYP_REQ"
        QT_MOC_LITERAL(146, 7),  // "TYP_REP"
        QT_MOC_LITERAL(154, 10),  // "TYP_DEALER"
        QT_MOC_LITERAL(165, 10),  // "TYP_ROUTER"
        QT_MOC_LITERAL(176, 8),  // "TYP_PAIR"
        QT_MOC_LITERAL(185, 8),  // "TYP_XPUB"
        QT_MOC_LITERAL(194, 8),  // "TYP_XSUB"
        QT_MOC_LITERAL(203, 5),  // "Event"
        QT_MOC_LITERAL(209, 10),  // "EVT_POLLIN"
        QT_MOC_LITERAL(220, 11),  // "EVT_POLLOUT"
        QT_MOC_LITERAL(232, 11),  // "EVT_POLLERR"
        QT_MOC_LITERAL(244, 6),  // "Events"
        QT_MOC_LITERAL(251, 8),  // "SendFlag"
        QT_MOC_LITERAL(260, 8),  // "SND_MORE"
        QT_MOC_LITERAL(269, 12),  // "SND_DONTWAIT"
        QT_MOC_LITERAL(282, 9),  // "SendFlags"
        QT_MOC_LITERAL(292, 11),  // "ReceiveFlag"
        QT_MOC_LITERAL(304, 12),  // "RCV_DONTWAIT"
        QT_MOC_LITERAL(317, 12),  // "ReceiveFlags"
        QT_MOC_LITERAL(330, 6),  // "Option"
        QT_MOC_LITERAL(337, 8),  // "OPT_TYPE"
        QT_MOC_LITERAL(346, 11),  // "OPT_RCVMORE"
        QT_MOC_LITERAL(358, 6),  // "OPT_FD"
        QT_MOC_LITERAL(365, 10),  // "OPT_EVENTS"
        QT_MOC_LITERAL(376, 14),  // "OPT_MAXMSGSIZE"
        QT_MOC_LITERAL(391, 13),  // "OPT_SUBSCRIBE"
        QT_MOC_LITERAL(405, 15),  // "OPT_UNSUBSCRIBE"
        QT_MOC_LITERAL(421, 13),  // "OPT_IMMEDIATE"
        QT_MOC_LITERAL(435, 17),  // "OPT_REQ_CORRELATE"
        QT_MOC_LITERAL(453, 15),  // "OPT_REQ_RELAXED"
        QT_MOC_LITERAL(469, 12),  // "OPT_AFFINITY"
        QT_MOC_LITERAL(482, 12),  // "OPT_IDENTITY"
        QT_MOC_LITERAL(495, 8),  // "OPT_RATE"
        QT_MOC_LITERAL(504, 16),  // "OPT_RECOVERY_IVL"
        QT_MOC_LITERAL(521, 10),  // "OPT_SNDBUF"
        QT_MOC_LITERAL(532, 10),  // "OPT_RCVBUF"
        QT_MOC_LITERAL(543, 10),  // "OPT_LINGER"
        QT_MOC_LITERAL(554, 17),  // "OPT_RECONNECT_IVL"
        QT_MOC_LITERAL(572, 21),  // "OPT_RECONNECT_IVL_MAX"
        QT_MOC_LITERAL(594, 11),  // "OPT_BACKLOG"
        QT_MOC_LITERAL(606, 10),  // "OPT_SNDHWM"
        QT_MOC_LITERAL(617, 10),  // "OPT_RCVHWM"
        QT_MOC_LITERAL(628, 12),  // "OPT_SNDTIMEO"
        QT_MOC_LITERAL(641, 12),  // "OPT_RCVTIMEO"
        QT_MOC_LITERAL(654, 8),  // "OPT_IPV6"
        QT_MOC_LITERAL(663, 12),  // "OPT_CONFLATE"
        QT_MOC_LITERAL(676, 7)   // "OPT_TOS"
    },
    "nzmqt::ZMQSocket",
    "messageReceived",
    "",
    "close",
    "sendMessage",
    "bytes_",
    "nzmqt::ZMQSocket::SendFlags",
    "flags_",
    "msg_",
    "Type",
    "TYP_PUB",
    "TYP_SUB",
    "TYP_PUSH",
    "TYP_PULL",
    "TYP_REQ",
    "TYP_REP",
    "TYP_DEALER",
    "TYP_ROUTER",
    "TYP_PAIR",
    "TYP_XPUB",
    "TYP_XSUB",
    "Event",
    "EVT_POLLIN",
    "EVT_POLLOUT",
    "EVT_POLLERR",
    "Events",
    "SendFlag",
    "SND_MORE",
    "SND_DONTWAIT",
    "SendFlags",
    "ReceiveFlag",
    "RCV_DONTWAIT",
    "ReceiveFlags",
    "Option",
    "OPT_TYPE",
    "OPT_RCVMORE",
    "OPT_FD",
    "OPT_EVENTS",
    "OPT_MAXMSGSIZE",
    "OPT_SUBSCRIBE",
    "OPT_UNSUBSCRIBE",
    "OPT_IMMEDIATE",
    "OPT_REQ_CORRELATE",
    "OPT_REQ_RELAXED",
    "OPT_AFFINITY",
    "OPT_IDENTITY",
    "OPT_RATE",
    "OPT_RECOVERY_IVL",
    "OPT_SNDBUF",
    "OPT_RCVBUF",
    "OPT_LINGER",
    "OPT_RECONNECT_IVL",
    "OPT_RECONNECT_IVL_MAX",
    "OPT_BACKLOG",
    "OPT_SNDHWM",
    "OPT_RCVHWM",
    "OPT_SNDTIMEO",
    "OPT_RCVTIMEO",
    "OPT_IPV6",
    "OPT_CONFLATE",
    "OPT_TOS"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnzmqtSCOPEZMQSocketENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       8,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   53,    2, 0x0a,    3 /* Public */,
       4,    2,   54,    2, 0x0a,    4 /* Public */,
       4,    1,   59,    2, 0x2a,    7 /* Public | MethodCloned */,
       4,    2,   62,    2, 0x0a,    9 /* Public */,
       4,    1,   67,    2, 0x2a,   12 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArrayList,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QByteArray, 0x80000000 | 6,    5,    7,
    QMetaType::Bool, QMetaType::QByteArray,    5,
    QMetaType::Bool, QMetaType::QByteArrayList, 0x80000000 | 6,    8,    7,
    QMetaType::Bool, QMetaType::QByteArrayList,    8,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,   11,  110,
      21,   21, 0x1,    3,  132,
      25,   21, 0x1,    3,  138,
      26,   26, 0x1,    2,  144,
      29,   26, 0x1,    2,  148,
      30,   30, 0x1,    1,  152,
      32,   30, 0x1,    1,  154,
      33,   33, 0x0,   27,  156,

 // enum data: key, value
      10, uint(nzmqt::ZMQSocket::TYP_PUB),
      11, uint(nzmqt::ZMQSocket::TYP_SUB),
      12, uint(nzmqt::ZMQSocket::TYP_PUSH),
      13, uint(nzmqt::ZMQSocket::TYP_PULL),
      14, uint(nzmqt::ZMQSocket::TYP_REQ),
      15, uint(nzmqt::ZMQSocket::TYP_REP),
      16, uint(nzmqt::ZMQSocket::TYP_DEALER),
      17, uint(nzmqt::ZMQSocket::TYP_ROUTER),
      18, uint(nzmqt::ZMQSocket::TYP_PAIR),
      19, uint(nzmqt::ZMQSocket::TYP_XPUB),
      20, uint(nzmqt::ZMQSocket::TYP_XSUB),
      22, uint(nzmqt::ZMQSocket::EVT_POLLIN),
      23, uint(nzmqt::ZMQSocket::EVT_POLLOUT),
      24, uint(nzmqt::ZMQSocket::EVT_POLLERR),
      22, uint(nzmqt::ZMQSocket::EVT_POLLIN),
      23, uint(nzmqt::ZMQSocket::EVT_POLLOUT),
      24, uint(nzmqt::ZMQSocket::EVT_POLLERR),
      27, uint(nzmqt::ZMQSocket::SND_MORE),
      28, uint(nzmqt::ZMQSocket::SND_DONTWAIT),
      27, uint(nzmqt::ZMQSocket::SND_MORE),
      28, uint(nzmqt::ZMQSocket::SND_DONTWAIT),
      31, uint(nzmqt::ZMQSocket::RCV_DONTWAIT),
      31, uint(nzmqt::ZMQSocket::RCV_DONTWAIT),
      34, uint(nzmqt::ZMQSocket::OPT_TYPE),
      35, uint(nzmqt::ZMQSocket::OPT_RCVMORE),
      36, uint(nzmqt::ZMQSocket::OPT_FD),
      37, uint(nzmqt::ZMQSocket::OPT_EVENTS),
      38, uint(nzmqt::ZMQSocket::OPT_MAXMSGSIZE),
      39, uint(nzmqt::ZMQSocket::OPT_SUBSCRIBE),
      40, uint(nzmqt::ZMQSocket::OPT_UNSUBSCRIBE),
      41, uint(nzmqt::ZMQSocket::OPT_IMMEDIATE),
      42, uint(nzmqt::ZMQSocket::OPT_REQ_CORRELATE),
      43, uint(nzmqt::ZMQSocket::OPT_REQ_RELAXED),
      44, uint(nzmqt::ZMQSocket::OPT_AFFINITY),
      45, uint(nzmqt::ZMQSocket::OPT_IDENTITY),
      46, uint(nzmqt::ZMQSocket::OPT_RATE),
      47, uint(nzmqt::ZMQSocket::OPT_RECOVERY_IVL),
      48, uint(nzmqt::ZMQSocket::OPT_SNDBUF),
      49, uint(nzmqt::ZMQSocket::OPT_RCVBUF),
      50, uint(nzmqt::ZMQSocket::OPT_LINGER),
      51, uint(nzmqt::ZMQSocket::OPT_RECONNECT_IVL),
      52, uint(nzmqt::ZMQSocket::OPT_RECONNECT_IVL_MAX),
      53, uint(nzmqt::ZMQSocket::OPT_BACKLOG),
      54, uint(nzmqt::ZMQSocket::OPT_SNDHWM),
      55, uint(nzmqt::ZMQSocket::OPT_RCVHWM),
      56, uint(nzmqt::ZMQSocket::OPT_SNDTIMEO),
      57, uint(nzmqt::ZMQSocket::OPT_RCVTIMEO),
      58, uint(nzmqt::ZMQSocket::OPT_IPV6),
      59, uint(nzmqt::ZMQSocket::OPT_CONFLATE),
      60, uint(nzmqt::ZMQSocket::OPT_TOS),

       0        // eod
};

Q_CONSTINIT const QMetaObject nzmqt::ZMQSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnzmqtSCOPEZMQSocketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ZMQSocket, std::true_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QByteArray> &, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendMessage'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<nzmqt::ZMQSocket::SendFlags, std::false_type>,
        // method 'sendMessage'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'sendMessage'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QByteArray> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<nzmqt::ZMQSocket::SendFlags, std::false_type>,
        // method 'sendMessage'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QByteArray> &, std::false_type>
    >,
    nullptr
} };

void nzmqt::ZMQSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZMQSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QList<QByteArray>>>(_a[1]))); break;
        case 1: _t->close(); break;
        case 2: { bool _r = _t->sendMessage((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<nzmqt::ZMQSocket::SendFlags>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->sendMessage((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->sendMessage((*reinterpret_cast< std::add_pointer_t<QList<QByteArray>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<nzmqt::ZMQSocket::SendFlags>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->sendMessage((*reinterpret_cast< std::add_pointer_t<QList<QByteArray>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< nzmqt::ZMQSocket::SendFlags >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< nzmqt::ZMQSocket::SendFlags >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZMQSocket::*)(const QList<QByteArray> & );
            if (_t _q_method = &ZMQSocket::messageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *nzmqt::ZMQSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nzmqt::ZMQSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnzmqtSCOPEZMQSocketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int nzmqt::ZMQSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void nzmqt::ZMQSocket::messageReceived(const QList<QByteArray> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS = QtMocHelpers::stringData(
    "nzmqt::ZMQContext"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS_t qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17)   // "nzmqt::ZMQContext"
    },
    "nzmqt::ZMQContext"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnzmqtSCOPEZMQContextENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject nzmqt::ZMQContext::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnzmqtSCOPEZMQContextENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ZMQContext, std::true_type>
    >,
    nullptr
} };

void nzmqt::ZMQContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *nzmqt::ZMQContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nzmqt::ZMQContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnzmqtSCOPEZMQContextENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int nzmqt::ZMQContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS = QtMocHelpers::stringData(
    "nzmqt::PollingZMQSocket"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS_t qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23)   // "nzmqt::PollingZMQSocket"
    },
    "nzmqt::PollingZMQSocket"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject nzmqt::PollingZMQSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<ZMQSocket::staticMetaObject>(),
    qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PollingZMQSocket, std::true_type>
    >,
    nullptr
} };

void nzmqt::PollingZMQSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *nzmqt::PollingZMQSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nzmqt::PollingZMQSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQSocketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ZMQSocket::qt_metacast(_clname);
}

int nzmqt::PollingZMQSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZMQSocket::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS = QtMocHelpers::stringData(
    "nzmqt::PollingZMQContext",
    "pollError",
    "",
    "errorNum",
    "errorMsg",
    "run",
    "poll",
    "timeout_"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[25];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[4];
    char stringdata6[5];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS_t qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "nzmqt::PollingZMQContext"
        QT_MOC_LITERAL(25, 9),  // "pollError"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 8),  // "errorNum"
        QT_MOC_LITERAL(45, 8),  // "errorMsg"
        QT_MOC_LITERAL(54, 3),  // "run"
        QT_MOC_LITERAL(58, 4),  // "poll"
        QT_MOC_LITERAL(63, 8)   // "timeout_"
    },
    "nzmqt::PollingZMQContext",
    "pollError",
    "",
    "errorNum",
    "errorMsg",
    "run",
    "poll",
    "timeout_"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnzmqtSCOPEPollingZMQContextENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   43,    2, 0x0a,    4 /* Public */,
       6,    1,   44,    2, 0x0a,    5 /* Public */,
       6,    0,   47,    2, 0x2a,    7 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject nzmqt::PollingZMQContext::staticMetaObject = { {
    QMetaObject::SuperData::link<ZMQContext::staticMetaObject>(),
    qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnzmqtSCOPEPollingZMQContextENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PollingZMQContext, std::true_type>,
        // method 'pollError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'run'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'poll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<long, std::false_type>,
        // method 'poll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void nzmqt::PollingZMQContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PollingZMQContext *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pollError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->run(); break;
        case 2: _t->poll((*reinterpret_cast< std::add_pointer_t<long>>(_a[1]))); break;
        case 3: _t->poll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PollingZMQContext::*)(int , const QString & );
            if (_t _q_method = &PollingZMQContext::pollError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *nzmqt::PollingZMQContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nzmqt::PollingZMQContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnzmqtSCOPEPollingZMQContextENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return ZMQContext::qt_metacast(_clname);
}

int nzmqt::PollingZMQContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZMQContext::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void nzmqt::PollingZMQContext::pollError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS = QtMocHelpers::stringData(
    "nzmqt::SocketNotifierZMQSocket",
    "notifierError",
    "",
    "errorNum",
    "errorMsg",
    "socketReadActivity",
    "socketWriteActivity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[31];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[19];
    char stringdata6[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS_t qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "nzmqt::SocketNotifierZMQSocket"
        QT_MOC_LITERAL(31, 13),  // "notifierError"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 8),  // "errorNum"
        QT_MOC_LITERAL(55, 8),  // "errorMsg"
        QT_MOC_LITERAL(64, 18),  // "socketReadActivity"
        QT_MOC_LITERAL(83, 19)   // "socketWriteActivity"
    },
    "nzmqt::SocketNotifierZMQSocket",
    "notifierError",
    "",
    "errorNum",
    "errorMsg",
    "socketReadActivity",
    "socketWriteActivity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   37,    2, 0x09,    4 /* Protected */,
       6,    0,   38,    2, 0x09,    5 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject nzmqt::SocketNotifierZMQSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<ZMQSocket::staticMetaObject>(),
    qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SocketNotifierZMQSocket, std::true_type>,
        // method 'notifierError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'socketReadActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'socketWriteActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void nzmqt::SocketNotifierZMQSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketNotifierZMQSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notifierError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->socketReadActivity(); break;
        case 2: _t->socketWriteActivity(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketNotifierZMQSocket::*)(int , const QString & );
            if (_t _q_method = &SocketNotifierZMQSocket::notifierError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *nzmqt::SocketNotifierZMQSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nzmqt::SocketNotifierZMQSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQSocketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ZMQSocket::qt_metacast(_clname);
}

int nzmqt::SocketNotifierZMQSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZMQSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void nzmqt::SocketNotifierZMQSocket::notifierError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS = QtMocHelpers::stringData(
    "nzmqt::SocketNotifierZMQContext",
    "notifierError",
    "",
    "errorNum",
    "errorMsg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[32];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS_t qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "nzmqt::SocketNotifierZMQContext"
        QT_MOC_LITERAL(32, 13),  // "notifierError"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 8),  // "errorNum"
        QT_MOC_LITERAL(56, 8)   // "errorMsg"
    },
    "nzmqt::SocketNotifierZMQContext",
    "notifierError",
    "",
    "errorNum",
    "errorMsg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject nzmqt::SocketNotifierZMQContext::staticMetaObject = { {
    QMetaObject::SuperData::link<ZMQContext::staticMetaObject>(),
    qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SocketNotifierZMQContext, std::true_type>,
        // method 'notifierError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void nzmqt::SocketNotifierZMQContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketNotifierZMQContext *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->notifierError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketNotifierZMQContext::*)(int , const QString & );
            if (_t _q_method = &SocketNotifierZMQContext::notifierError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *nzmqt::SocketNotifierZMQContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nzmqt::SocketNotifierZMQContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnzmqtSCOPESocketNotifierZMQContextENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ZMQContext::qt_metacast(_clname);
}

int nzmqt::SocketNotifierZMQContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZMQContext::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void nzmqt::SocketNotifierZMQContext::notifierError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP

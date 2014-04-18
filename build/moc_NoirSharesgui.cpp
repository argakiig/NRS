/****************************************************************************
** Meta object code from reading C++ file 'NoirSharesgui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/NoirSharesgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NoirSharesgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NoirSharesGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x0a,
      63,   44,   14,   14, 0x0a,
      92,   85,   14,   14, 0x0a,
     137,  117,   14,   14, 0x0a,
     185,  165,   14,   14, 0x0a,
     213,  206,   14,   14, 0x0a,
     232,   14,   14,   14, 0x08,
     251,   14,   14,   14, 0x08,
     269,   14,   14,   14, 0x08,
     291,   14,   14,   14, 0x08,
     314,   14,   14,   14, 0x08,
     339,  334,   14,   14, 0x08,
     367,   14,   14,   14, 0x28,
     388,  334,   14,   14, 0x08,
     418,   14,   14,   14, 0x28,
     441,   14,   14,   14, 0x08,
     458,   14,   14,   14, 0x08,
     480,  473,   14,   14, 0x08,
     550,  533,   14,   14, 0x08,
     591,   85,   14,   14, 0x08,
     611,   14,   14,   14, 0x08,
     626,   14,   14,   14, 0x08,
     645,   14,   14,   14, 0x08,
     674,  660,   14,   14, 0x08,
     702,   14,   14,   14, 0x28,
     726,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NoirSharesGUI[] = {
    "NoirSharesGUI\0\0count\0setNumConnections(int)\0"
    "count,nTotalBlocks\0setNumBlocks(int,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "title,message,modal\0error(QString,QString,bool)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0gotoOverviewPage()\0"
    "gotoHistoryPage()\0gotoAddressBookPage()\0"
    "gotoReceiveCoinsPage()\0gotoSendCoinsPage()\0"
    "addr\0gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0backupWallet()\0"
    "changePassphrase()\0unlockWallet()\0"
    "fToggleHidden\0showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
};

void NoirSharesGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NoirSharesGUI *_t = static_cast<NoirSharesGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoOverviewPage(); break;
        case 7: _t->gotoHistoryPage(); break;
        case 8: _t->gotoAddressBookPage(); break;
        case 9: _t->gotoReceiveCoinsPage(); break;
        case 10: _t->gotoSendCoinsPage(); break;
        case 11: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->gotoSignMessageTab(); break;
        case 13: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->gotoVerifyMessageTab(); break;
        case 15: _t->optionsClicked(); break;
        case 16: _t->aboutClicked(); break;
        case 17: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 18: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->backupWallet(); break;
        case 21: _t->changePassphrase(); break;
        case 22: _t->unlockWallet(); break;
        case 23: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->showNormalIfMinimized(); break;
        case 25: _t->toggleHidden(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NoirSharesGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NoirSharesGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NoirSharesGUI,
      qt_meta_data_NoirSharesGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NoirSharesGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NoirSharesGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NoirSharesGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NoirSharesGUI))
        return static_cast<void*>(const_cast< NoirSharesGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NoirSharesGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

#include "node/nodewidget.h"

NodeWidget::NodeWidget()
    : QGroupBox("Node")
    , _deleteNode("Delete")
    , _addressLabel("Address")
    , _portLabel("Port")
    , _nameLabel("Name")
    , _swapLock("Swap Lock")
    , _syncPortLabel("Sync Port")
    , _dataTransferPortLabel("Data Transfer Port")
    , _addWindowButton("Add Window")
{
    QObject::connect(
        &_deleteNode, SIGNAL(pressed()),
        this, SIGNAL(removeNode())
    );

    QObject::connect(
        &_addWindowButton, SIGNAL(pressed()),
        this, SLOT(addWindow())
    );

    _layout = new QGridLayout;
    
    _layout->addWidget(&_deleteNode, 0, 0, 1, 4);

    _layout->addWidget(&_addressLabel, 1, 0);
    _layout->addWidget(&_address, 1, 1);
    _layout->addWidget(&_portLabel, 1, 2);
    _layout->addWidget(&_port, 1, 3);

    _layout->addWidget(&_nameLabel, 2, 0);
    _layout->addWidget(&_name, 2, 1);
    _layout->addWidget(&_swapLock, 2, 2, 1, 2);

    _layout->addWidget(&_syncPortLabel, 3, 0);
    _layout->addWidget(&_syncPort, 3, 1);
    _layout->addWidget(&_dataTransferPortLabel, 3, 2);
    _layout->addWidget(&_dataTransferPort, 3, 3);

    _layout->addWidget(&_addWindowButton, 4, 0, 1, 4);

    setLayout(_layout);
}

QString NodeWidget::text() const {
    return "";
}

void NodeWidget::addWindow() {
    int rowCount = _layout->rowCount();

    WindowWidget* w = new WindowWidget;
    QObject::connect(
        w, SIGNAL(removeWindow()),
        this, SLOT(removeWindow())
    );

    _layout->addWidget(w, rowCount++, 0, 1, 5);
    _windowWidgets.append(w);
}

void NodeWidget::removeWindow() {
    QObject* o = sender();
    WindowWidget* w = dynamic_cast<WindowWidget*>(o);

    _layout->removeWidget(w);
    _windowWidgets.removeOne(w);

    w->deleteLater();
}

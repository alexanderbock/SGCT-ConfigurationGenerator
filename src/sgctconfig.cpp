#include "sgctconfig.h"

#include <QGroupBox>

SGCTConfigWidget::SGCTConfigWidget(QWidget* parent, Qt::WindowFlags flags)
    : QWidget(parent, flags)
    , _masterAddressLabel("Master Address")
    , _masterAddress("localhost")
    , _debugMode("Debug Mode")
    , _externalControlPortLabel("External Control Port")
    , _externalControlPort("20500")
    , _firmSync("Firm Sync")
    , _newNodeButton("New Node")
{
    QObject::connect(
        &_newNodeButton, SIGNAL(pressed()),
        this, SLOT(addNode())
    );

    _layout = new QVBoxLayout;

    {
        QGroupBox* box = new QGroupBox;
        QGridLayout* layout = new QGridLayout;
        layout->setColumnMinimumWidth(2, 50);

        layout->addWidget(&_masterAddressLabel, 0, 0, Qt::AlignLeft);
        layout->addWidget(&_masterAddress, 0, 1, Qt::AlignRight);

        layout->addWidget(&_externalControlPortLabel, 0, 3, Qt::AlignLeft);
        layout->addWidget(&_externalControlPort, 0, 4, Qt::AlignRight);

        layout->addWidget(&_debugMode, 0, 5);
        layout->addWidget(&_firmSync, 0, 6);

        box->setLayout(layout);
        _layout->addWidget(box);
    }


    _layout->addWidget(&_settingsWidget);
    _layout->addWidget(&_sceneWidget);
    _layout->addWidget(&_captureWidget);
    _layout->addWidget(&_userWidget);
    _layout->addWidget(&_trackerWidget);

    _layout->addWidget(&_newNodeButton);
    
    setLayout(_layout);
}

void SGCTConfigWidget::addNode() {
    NodeWidget* w = new NodeWidget;
    QObject::connect(
        w, SIGNAL(removeNode()),
        this, SLOT(removeNode())
    );

    _layout->addWidget(w);
    _nodeWidgets.append(w);
}

void SGCTConfigWidget::removeNode() {
    QObject* o = sender();
    NodeWidget* w = dynamic_cast<NodeWidget*>(o);

    _layout->removeWidget(w);
    _nodeWidgets.removeOne(w);

    w->deleteLater();
}

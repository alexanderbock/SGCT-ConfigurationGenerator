#include "tracker/sensorwidget.h"

#include <QHBoxLayout>

SensorWidget::SensorWidget()
    : QGroupBox("Sensor")
    , _deleteButton("Delete")
    , _idLabel("ID")
    , _addressLabel("VPRN Address")
{
    QObject::connect(
        &_deleteButton, SIGNAL(pressed()),
        this, SIGNAL(removeSensor())
    );

    QHBoxLayout* layout = new QHBoxLayout;

    layout->addWidget(&_idLabel);
    layout->addWidget(&_id);

    layout->addWidget(&_addressLabel);
    layout->addWidget(&_address);

    layout->addWidget(&_deleteButton);

    setLayout(layout);
}

QString SensorWidget::text() const {
    return "";
}

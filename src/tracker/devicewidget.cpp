#include "tracker/trackerwidget.h"


DeviceWidget::DeviceWidget()
    : QGroupBox("Device")
    , _deleteButton("Delete")
    , _offsetLabel("Offset")
    , _orientationLabel("Orientation")
    , _quaternionLabel("Quaternion")
    , _newAxesButton("New Axes")
    , _newButtonsButton("New Buttons")
    , _newSensorsButton("New Sensors")
{
    QObject::connect(
        &_newAxesButton, SIGNAL(pressed()),
        this, SLOT(addAxes())
    );
    QObject::connect(
        &_newButtonsButton, SIGNAL(pressed()),
        this, SLOT(addButtons())
    );
    QObject::connect(
        &_newSensorsButton, SIGNAL(pressed()),
        this, SLOT(addSensor())
    );

    QObject::connect(
        &_deleteButton, SIGNAL(pressed()),
        this, SIGNAL(removeDevice())
    );

    _layout = new QGridLayout;

    _layout->addWidget(&_deleteButton, 0, 0);

    _layout->addWidget(&_offsetLabel, 1, 0);
    _layout->addWidget(&_xOffset, 1, 1);
    _layout->addWidget(&_yOffset, 1, 2);
    _layout->addWidget(&_zOffset, 1, 3);

    _layout->addWidget(&_orientationLabel, 2, 0);
    _layout->addWidget(&_xOrientation, 2, 1);
    _layout->addWidget(&_yOrientation, 2, 2);
    _layout->addWidget(&_zOrientation, 2, 3);

    _layout->addWidget(&_quaternionLabel, 3, 0);
    _layout->addWidget(&_xQuaternion, 3, 1);
    _layout->addWidget(&_yQuaternion, 3, 2);
    _layout->addWidget(&_zQuaternion, 3, 3);
    _layout->addWidget(&_wQuaternion, 3, 4);

    _layout->addWidget(&_newAxesButton, 4, 0, 1, 5);
    _layout->addWidget(&_newButtonsButton, 5, 0, 1, 5);
    _layout->addWidget(&_newSensorsButton, 6, 0, 1, 5);

    setLayout(_layout);
}

void DeviceWidget::addAxes() {
    int rowCount = _layout->rowCount();

    AxesWidget* w = new AxesWidget;
    QObject::connect(
        w, SIGNAL(removeAxes()),
        this, SLOT(removeAxes())
    );

    _layout->addWidget(w, rowCount++, 0, 1, 5);
    _axesWidgets.append(w);
}

void DeviceWidget::removeAxes() {
    QObject* o = sender();
    AxesWidget* w = dynamic_cast<AxesWidget*>(o);

    _layout->removeWidget(w);
    _axesWidgets.removeOne(w);

    w->deleteLater();
}

void DeviceWidget::addButtons() {
    int rowCount = _layout->rowCount();

    ButtonsWidget* w = new ButtonsWidget;
    QObject::connect(
        w, SIGNAL(removeButtons()),
        this, SLOT(removeButtons())
    );

    _layout->addWidget(w, rowCount++, 0, 1, 5);
    _buttonsWidgets.append(w);
}

void DeviceWidget::removeButtons() {
    QObject* o = sender();
    ButtonsWidget* w = dynamic_cast<ButtonsWidget*>(o);

    _layout->removeWidget(w);
    _buttonsWidgets.removeOne(w);

    w->deleteLater();
}

void DeviceWidget::addSensor() {
    int rowCount = _layout->rowCount();

    SensorWidget* w = new SensorWidget;
    QObject::connect(
        w, SIGNAL(removeSensor()),
        this, SLOT(removeSensor())
    );

    _layout->addWidget(w, rowCount++, 0, 1, 5);
    _sensorWidgets.append(w);
}

void DeviceWidget::removeSensor() {
    QObject* o = sender();
    SensorWidget* w = dynamic_cast<SensorWidget*>(o);

    _layout->removeWidget(w);
    _sensorWidgets.removeOne(w);

    w->deleteLater();
}

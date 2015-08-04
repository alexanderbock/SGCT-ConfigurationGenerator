#include "tracker/trackerwidget.h"


TrackerWidget::TrackerWidget()
    : QGroupBox("Tracker")
    , _nameLabel("Name")
    , _offsetLabel("Offset")
    , _orientationLabel("Orientation")
    , _quaternionLabel("Quaternion")
    , _scaleLabel("Scale")
    , _newDeviceButton("New Device")
{
    QObject::connect(
        &_newDeviceButton, SIGNAL(pressed()),
        this, SLOT(addDevice())
    );

    _layout = new QGridLayout;

    _layout->addWidget(&_nameLabel, 0, 0);
    _layout->addWidget(&_name, 0, 1);

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

    _layout->addWidget(&_scaleLabel, 4, 0);
    _layout->addWidget(&_scale, 4, 1);

    _layout->addWidget(&_newDeviceButton, 5, 0, 1, 5);

    setLayout(_layout);
}

void TrackerWidget::addDevice() {
    int rowCount = _layout->rowCount();

    DeviceWidget* w = new DeviceWidget;
    QObject::connect(
        w, SIGNAL(removeDevice()),
        this, SLOT(removeDevice())
    );

    _layout->addWidget(w, rowCount++, 0, 1, 5);
    _deviceWidgets.append(w);
}

void TrackerWidget::removeDevice() {
    QObject* o = sender();
    DeviceWidget* w = dynamic_cast<DeviceWidget*>(o);

    _layout->removeWidget(w);
    _deviceWidgets.removeOne(w);

    w->deleteLater();
}

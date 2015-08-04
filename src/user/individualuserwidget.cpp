#include "user/individualuserwidget.h"

#include <QGridLayout>

IndividualUserWidget::IndividualUserWidget()
    : QGroupBox("User")
    , _deleteButton("Delete")
    , _nameLabel("Name")
    , _eyeSeparationLabel("Eye Separation")
    , _posLabel("Position")
    , _orientationLabel("Orientation")
    , _quaternionLabel("Quaternion")
    , _trackingLabel("Tracking")
{
    QObject::connect(
        &_deleteButton, SIGNAL(pressed()),
        this, SIGNAL(removeUser())
    );

    QGridLayout* layout = new QGridLayout;

    layout->addWidget(&_deleteButton, 0, 1, 1, 5);

    layout->addWidget(&_nameLabel, 1, 0);
    layout->addWidget(&_name, 1, 1);

    layout->addWidget(&_eyeSeparationLabel, 1, 2);
    layout->addWidget(&_eyeSeparation, 1, 3);

    layout->addWidget(&_posLabel, 2, 0);
    layout->addWidget(&_xPos, 2, 1);
    layout->addWidget(&_yPos, 2, 2);
    layout->addWidget(&_zPos, 2, 3);

    layout->addWidget(&_orientationLabel, 3, 0);
    layout->addWidget(&_xOrientation, 3, 1);
    layout->addWidget(&_yOrientation, 3, 2);
    layout->addWidget(&_zOrientation, 3, 3);

    layout->addWidget(&_quaternionLabel, 4, 0);
    layout->addWidget(&_xQuaternion, 4, 1);
    layout->addWidget(&_yQuaternion, 4, 2);
    layout->addWidget(&_zQuaternion, 4, 3);
    layout->addWidget(&_wQuaternion, 4, 4);

    layout->addWidget(&_trackingLabel, 5, 0);
    layout->addWidget(&_tracker, 5, 1, 1, 3);

    setLayout(layout);
}

QString IndividualUserWidget::text() const {
    return "";
}

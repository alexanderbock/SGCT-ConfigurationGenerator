#include "scenewidget.h"

#include <QGridLayout>

SceneWidget::SceneWidget()
    : QGroupBox("Scene")
    , _offsetLabel("Offset")
    , _yawLabel("Yaw")
    , _pitchLabel("Pitch")
    , _rollLabel("Roll")
    , _scaleLabel("Scale")
{
    QGridLayout* layout = new QGridLayout;

    layout->addWidget(&_offsetLabel, 0, 0);
    layout->addWidget(&_xOffset, 0, 1);
    layout->addWidget(&_yOffset, 0, 2);
    layout->addWidget(&_zOffset, 0, 3);

    layout->addWidget(&_yawLabel, 1, 0);
    layout->addWidget(&_yaw, 1, 1);
    
    layout->addWidget(&_pitchLabel, 1, 2);
    layout->addWidget(&_pitch, 1, 3);

    layout->addWidget(&_rollLabel, 1, 4);
    layout->addWidget(&_roll, 1, 5);

    layout->addWidget(&_scaleLabel, 1, 6);
    layout->addWidget(&_scale, 1, 7);

    setLayout(layout);
}

QString SceneWidget::text() const {
    return "";
}

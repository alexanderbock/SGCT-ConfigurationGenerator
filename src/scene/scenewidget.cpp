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
    setCheckable(true);
    QObject::connect(
        this, SIGNAL(toggled(bool)),
        this, SLOT(checked(bool))
    );

    _layout.addWidget(&_offsetLabel, 0, 0);
    _layout.addWidget(&_xOffset, 0, 1);
    _layout.addWidget(&_yOffset, 0, 2);
    _layout.addWidget(&_zOffset, 0, 3);

    _layout.addWidget(&_yawLabel, 1, 0);
    _layout.addWidget(&_yaw, 1, 1);
    
    _layout.addWidget(&_pitchLabel, 1, 2);
    _layout.addWidget(&_pitch, 1, 3);

    _layout.addWidget(&_rollLabel, 1, 4);
    _layout.addWidget(&_roll, 1, 5);

    _layout.addWidget(&_scaleLabel, 1, 6);
    _layout.addWidget(&_scale, 1, 7);

    setLayout(&_layout);
}

QString SceneWidget::text() const {
    return "";
}

void SceneWidget::checked(bool on) {
    for (int i = 0; i < _layout.count(); ++i)
        dynamic_cast<QWidgetItem*>(_layout.itemAt(i))->widget()->setVisible(on);
    setFlat(!on);
}

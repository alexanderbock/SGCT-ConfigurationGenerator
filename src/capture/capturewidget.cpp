#include "capture/capturewidget.h"

#include <QGridLayout>

CaptureWidget::CaptureWidget()
    : QGroupBox("Capture")
    , _allPathLabel("Capture Path")
    , _monoPathLabel("Mono Path")
    , _leftPathLabel("Left Path")
    , _rightPathLabel("Right Path")
    , _formatLabel("Format")
{
    setCheckable(true);
    QObject::connect(
        this, SIGNAL(toggled(bool)),
        this, SLOT(checked(bool))
    );

    _layout.addWidget(&_allPathLabel, 0, 0);
    _layout.addWidget(&_allPath, 0, 1, 1, 5);

    _layout.addWidget(&_monoPathLabel, 1, 0);
    _layout.addWidget(&_monoPath, 1, 1);
    _layout.addWidget(&_leftPathLabel, 1, 2);
    _layout.addWidget(&_leftPath, 1, 3);
    _layout.addWidget(&_rightPathLabel, 1, 4);
    _layout.addWidget(&_rightPath, 1, 5);
    
    _layout.addWidget(&_formatLabel, 2, 0);
    _layout.addWidget(&_format, 2, 1, 1, 5);

    setLayout(&_layout);
}

QString CaptureWidget::text() const {
    return "";
}

void CaptureWidget::checked(bool on) {
    for (int i = 0; i < _layout.count(); ++i)
        dynamic_cast<QWidgetItem*>(_layout.itemAt(i))->widget()->setVisible(on);
    setFlat(!on);
}

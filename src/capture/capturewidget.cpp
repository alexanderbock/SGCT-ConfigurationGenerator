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
    QGridLayout* layout = new QGridLayout;

    layout->addWidget(&_allPathLabel, 0, 0);
    layout->addWidget(&_allPath, 0, 1, 1, 5);

    layout->addWidget(&_monoPathLabel, 1, 0);
    layout->addWidget(&_monoPath, 1, 1);
    layout->addWidget(&_leftPathLabel, 1, 2);
    layout->addWidget(&_leftPath, 1, 3);
    layout->addWidget(&_rightPathLabel, 1, 4);
    layout->addWidget(&_rightPath, 1, 5);
    
    layout->addWidget(&_formatLabel, 2, 0);
    layout->addWidget(&_format, 2, 1, 1, 5);

    setLayout(layout);
}

QString CaptureWidget::text() const {
    return "";
}

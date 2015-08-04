#include "settings/settingswidget.h"

#include <QGridLayout>
#include <QHBoxLayout>

SettingsWidget::SettingsWidget()
    : QGroupBox("Settings")
    , _depthBufferTexture("Depth Buffer Texture")
    , _normalTexture("Normal Texture")
    , _positionTexture("Position Texture")
    , _pbo("PixelBufferObject")
    , _precisionLabel("Render Precision")
    , _swapIntervalLabel("Swap Interval")
    , _refreshRateLabel("Refresh Rate")
    , _fxaaOffsetLabel("Offset")
    , _fxaaTrimLabel("Trim")
{
    _precision.addItems({
        "default",
        "16",
        "32"
    });

    QGridLayout* layout = new QGridLayout;
    
    layout->addWidget(&_depthBufferTexture, 0, 0);
    layout->addWidget(&_normalTexture, 0, 1);
    layout->addWidget(&_positionTexture, 0, 2);
    layout->addWidget(&_pbo, 0, 3);
    layout->addWidget(&_precisionLabel, 1, 0);
    layout->addWidget(&_precision, 1, 1);
    layout->addWidget(&_swapIntervalLabel, 1, 2);
    layout->addWidget(&_swapInterval, 1, 3);
    layout->addWidget(&_refreshRateLabel, 2, 0);
    layout->addWidget(&_refreshRate, 2, 1);

    {
        QGroupBox* box = new QGroupBox("FXAA");
        QBoxLayout* l = new QHBoxLayout;
        l->addWidget(&_fxaaOffsetLabel);
        l->addWidget(&_fxaaOffset);
        l->addWidget(&_fxaaTrimLabel);
        l->addWidget(&_fxaaTrim);

        box->setLayout(l);
        layout->addWidget(box, 3, 0, 1, 4);
    }

    layout->addWidget(&_osdTextWidget, 4, 0, 1, 4);

    setLayout(layout);
}

QString SettingsWidget::text() const {
    return "";
}

#include "settings/settingswidget.h"

#include <QGridLayout>
#include <QHBoxLayout>

#include <QDebug>

SettingsWidget::SettingsWidget()
    : QGroupBox("Settings")
    , _depthBufferTexture("Depth Buffer Texture")
    , _normalTexture("Normal Texture")
    , _positionTexture("Position Texture")
    , _pbo("PixelBufferObject")
    , _precisionLabel("Render Precision")
    , _swapIntervalLabel("Swap Interval")
    , _refreshRateLabel("Refresh Rate")
    , _fxaa("FXAA")
    , _fxaaOffsetLabel("Offset")
    , _fxaaTrimLabel("Trim")
{
    setObjectName("Settings");
    setCheckable(true);
    QObject::connect(
        this, SIGNAL(toggled(bool)),
        this, SLOT(checked(bool))
    );

    _depthBufferTexture.setObjectName("DepthBufferTexture");
    _normalTexture.setObjectName("NormalTexture");
    _positionTexture.setObjectName("PositionTexture");
    _pbo.setObjectName("PBO");

    _precision.setObjectName("Precision");
    _swapInterval.setObjectName("SwapInterval");
    _refreshRate.setObjectName("RefreshRate");
    _fxaaOffset.setObjectName("FXAA_Offset");
    _fxaaTrim.setObjectName("FXAA_Trim");

    _precision.addItems({
        "default",
        "16",
        "32"
    });

    _layout.addWidget(&_depthBufferTexture, 0, 0);
    _layout.addWidget(&_normalTexture, 0, 1);
    _layout.addWidget(&_positionTexture, 0, 2);
    _layout.addWidget(&_pbo, 0, 3);
    _layout.addWidget(&_precisionLabel, 1, 0);
    _layout.addWidget(&_precision, 1, 1);
    _layout.addWidget(&_swapIntervalLabel, 1, 2);
    _layout.addWidget(&_swapInterval, 1, 3);
    _layout.addWidget(&_refreshRateLabel, 1, 4);
    _layout.addWidget(&_refreshRate, 1, 5);

    {
        _fxaa.setObjectName("FXAA");
        _fxaa.setCheckable(true);
        QObject::connect(
            &_fxaa, SIGNAL(toggled(bool)),
            this, SLOT(fxaaChecked(bool))
        );
        _fxaaLayout.addWidget(&_fxaaOffsetLabel);
        _fxaaLayout.addWidget(&_fxaaOffset);
        _fxaaLayout.addWidget(&_fxaaTrimLabel);
        _fxaaLayout.addWidget(&_fxaaTrim);

        _fxaa.setLayout(&_fxaaLayout);
        _layout.addWidget(&_fxaa, 3, 0, 1, 4);
    }

    _layout.addWidget(&_osdTextWidget, 4, 0, 1, 4);

    setLayout(&_layout);
}

QString SettingsWidget::text() const {
    return "";
}

void SettingsWidget::checked(bool on) {
    for (int i = 0; i < _layout.count(); ++i)
        dynamic_cast<QWidgetItem*>(_layout.itemAt(i))->widget()->setVisible(on);
    setFlat(!on);
}

void SettingsWidget::fxaaChecked(bool on) {
    for (int i = 0; i < _fxaaLayout.count(); ++i)
        dynamic_cast<QWidgetItem*>(_fxaaLayout.itemAt(i))->widget()->setVisible(on);
    _fxaa.setFlat(!on);
    
}

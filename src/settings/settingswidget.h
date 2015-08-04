#include <QGroupBox>

#include "settings/osdtextwidget.h"

#include <QCheckBox>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>

class SettingsWidget : public QGroupBox {
Q_OBJECT
public:
    SettingsWidget();

    QString text() const;

private:
    QCheckBox _depthBufferTexture;
    QCheckBox _normalTexture;
    QCheckBox _positionTexture;
    QCheckBox _pbo;

    QLabel _precisionLabel;
    QComboBox _precision;

    QLabel _swapIntervalLabel;
    QLineEdit _swapInterval;
    QLabel _refreshRateLabel;
    QLineEdit _refreshRate;

    QLabel _fxaaOffsetLabel;
    QLineEdit _fxaaOffset;
    QLabel _fxaaTrimLabel;
    QLineEdit _fxaaTrim;

    OSDTextWidget _osdTextWidget;
};
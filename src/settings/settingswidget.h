#include <QGroupBox>

#include "settings/osdtextwidget.h"

#include <QCheckBox>
#include <QComboBox>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>

class SettingsWidget : public QGroupBox {
Q_OBJECT
public:
    SettingsWidget();

    QString text() const;

private slots:
    void checked(bool on);

    void fxaaChecked(bool on);

private:
    QGridLayout _layout;

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

    QGroupBox _fxaa;
    QVBoxLayout _fxaaLayout;
    QLabel _fxaaOffsetLabel;
    QLineEdit _fxaaOffset;
    QLabel _fxaaTrimLabel;
    QLineEdit _fxaaTrim;

    OSDTextWidget _osdTextWidget;
};
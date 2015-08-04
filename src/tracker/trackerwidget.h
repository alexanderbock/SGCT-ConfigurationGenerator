#include <QGroupBox>

#include "tracker/devicewidget.h"

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSlider>

class TrackerWidget : public QGroupBox {
Q_OBJECT
public:
    TrackerWidget();

public slots:
    void removeDevice();

private slots:
    void addDevice();

private:
    QGridLayout* _layout;

    QLabel _nameLabel;
    QLineEdit _name;

    QLabel _offsetLabel;
    QLineEdit _xOffset;
    QLineEdit _yOffset;
    QLineEdit _zOffset;

    QLabel _orientationLabel;
    QLineEdit _xOrientation;
    QLineEdit _yOrientation;
    QLineEdit _zOrientation;

    QLabel _quaternionLabel;
    QLineEdit _xQuaternion;
    QLineEdit _yQuaternion;
    QLineEdit _zQuaternion;
    QLineEdit _wQuaternion;

    QLabel _scaleLabel;
    QLineEdit _scale;

    QPushButton _newDeviceButton;

    QList<DeviceWidget*> _deviceWidgets;
};

#include <QGroupBox>

#include "tracker/axeswidget.h"
#include "tracker/buttonswidget.h"
#include "tracker/sensorwidget.h"

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QList>
#include <QPushButton>

class DeviceWidget : public QGroupBox {
Q_OBJECT
public:
    DeviceWidget();

signals:
    void removeDevice();

public slots:
    void removeAxes();
    void removeButtons();
    void removeSensor();

private slots:
    void addAxes();
    void addButtons();
    void addSensor();

private:
    QGridLayout* _layout;
    
    QPushButton _deleteButton;

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

    QPushButton _newAxesButton;
    QPushButton _newButtonsButton;
    QPushButton _newSensorsButton;

    QList<AxesWidget*> _axesWidgets;
    QList<ButtonsWidget*> _buttonsWidgets;
    QList<SensorWidget*> _sensorWidgets;
};

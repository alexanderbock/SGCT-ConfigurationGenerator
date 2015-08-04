#include <QGroupBox>

#include <QLabel>
#include <QLineEdit>

class SceneWidget : public QGroupBox {
Q_OBJECT
public:
    SceneWidget();

    QString text() const;

private:
    QLabel _offsetLabel;
    QLineEdit _xOffset;
    QLineEdit _yOffset;
    QLineEdit _zOffset;

    QLabel _yawLabel;
    QLineEdit _yaw;
    QLabel _pitchLabel;
    QLineEdit _pitch;
    QLabel _rollLabel;
    QLineEdit _roll;

    QLabel _scaleLabel;
    QLineEdit _scale;
};

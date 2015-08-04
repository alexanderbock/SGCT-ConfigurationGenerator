#include <QGroupBox>

#include <QCheckBox>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>

class PlaneProjectionWidget : public QGroupBox {
Q_OBJECT
public:
    PlaneProjectionWidget();

private:
    QLabel _userLabel;
    QLineEdit _user;

    QLabel _nameLabel;
    QLineEdit _name;

    QLabel _overlayTextureLabel;
    QLineEdit _overlayTexture;

    QLabel _maskLabel;
    QLineEdit _mask;

    QLabel _meshLabel;
    QLineEdit _mesh;

    QCheckBox _tracked;

    QLabel _eyeLabel;
    QComboBox _eye;

    QLabel _positionLabel;
    QLineEdit _position;

    QLabel _sizeLabel;
    QLineEdit _size;

    QComboBox _projectionType;

    // PlanarProjection
    QLabel _fieldOfViewLabel;
    QLineEdit _fieldOfViewDown;
    QLineEdit _fieldOfViewLeft;
    QLineEdit _fieldOfViewRight;
    QLineEdit _fieldOfViewUp;

    QLabel _headingLabel;
    QLineEdit _heading;
    QLabel _azimuthLabel;
    QLineEdit _azimuth;
    QLabel _pitchLabel;
    QLineEdit _pitch;
    QLabel _elevationLabel;
    QLineEdit _elevation;
    QLabel _rollLabel;
    QLineEdit _roll;
    QLabel _distanceLabel;
    QLineEdit _distance;
};
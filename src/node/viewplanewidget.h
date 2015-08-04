#include <QGroupBox>

#include <QCheckBox>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>

class ViewPlaneWidget : public QGroupBox {
Q_OBJECT
public:
    ViewPlaneWidget();

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

    // Viewplane
    QLabel _lowerLeftLabel;
    QLineEdit _xLowerLeft;
    QLineEdit _yLowerLeft;
    QLineEdit _zLowerLeft;
    QLabel _upperLeftLabel;
    QLineEdit _xUpperLeft;
    QLineEdit _yUpperLeft;
    QLineEdit _zUpperLeft;
    QLabel _upperRightLabel;
    QLineEdit _xUpperRight;
    QLineEdit _yUpperRight;
    QLineEdit _zUpperRight;

};
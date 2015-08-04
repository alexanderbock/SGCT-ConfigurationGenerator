#include <QGroupBox>

#include <QCheckBox>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>

class FisheyeWidget : public QGroupBox {
Q_OBJECT
public:
    FisheyeWidget();

private:
    QLabel _fieldOfViewLabel;
    QLineEdit _fieldOfView;

    QComboBox _fisheyeCubemapQuality;
    
    QLabel _overlayLabel;
    QLineEdit _overlay;

    QLabel _maskLabel;
    QLineEdit _mask;

    QComboBox _fisheyeMethod;

    QCheckBox _interpolation;

    QLabel _tiltLabel;
    QLineEdit _tilt;

    QLabel _diameterLabel;
    QLineEdit _diameter;

    QLabel _cropLabel;
    QLineEdit _leftCrop;
    QLineEdit _rightCrop;
    QLineEdit _bottomCrop;
    QLineEdit _topCrop;

    QLabel _offsetLabel;
    QLineEdit _xOffset;
    QLineEdit _yOffset;
    QLineEdit _zOffset;
};
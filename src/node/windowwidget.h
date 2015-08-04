#include <QGroupBox>

#include "node/fisheyewidget.h"
#include "node/planeprojectionwidget.h"
#include "node/viewplanewidget.h"

#include <QCheckBox>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class WindowWidget : public QGroupBox {
Q_OBJECT
public:
    WindowWidget();

signals:
    void removeWindow();

private:
    QPushButton _deleteWindow;

    QLabel _nameLabel;
    QLineEdit _name;

    QCheckBox _fullScreen;
    QCheckBox _floating;
    QCheckBox _border;
    QCheckBox _dbuffered;

    QLabel _monitorIndexLabel;
    QLineEdit _monitorIndex;

    QLabel _gammaLabel;
    QLineEdit _gamma;

    QLabel _contrastLabel;
    QLineEdit _contrast;

    QLabel _brightnessLabel;
    QLineEdit _brightness;

    QLabel _msaaLabel;
    QLineEdit _msaa;

    QCheckBox _alpha;

    QCheckBox _fxaa;

    QLabel _stereoLabel;
    QComboBox _stereo;

    QLabel _positionLabel;
    QLineEdit _xPosition;
    QLineEdit _yPosition;

    QLabel _sizeLabel;
    QLineEdit _xSize;
    QLineEdit _ySize;

    QLabel _resolutionLabel;
    QLineEdit _xResolution;
    QLineEdit _yResolution;

    QLabel _viewOptionLabel;
    QComboBox _viewOption;
    FisheyeWidget _fisheyeWidget;
    PlaneProjectionWidget _planeProjectionWidget;
    ViewPlaneWidget _viewPlaneWidget;
};
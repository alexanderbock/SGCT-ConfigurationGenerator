#include "node/windowwidget.h"

#include <QGridLayout>

WindowWidget::WindowWidget()
    : QGroupBox("Node")
    , _nameLabel("Name")
    , _fullScreen("Full Screen")
    , _floating("Floating")
    , _border("Window Border")
    , _dbuffered("Dbuffered")
    , _monitorIndexLabel("Monitor Index")
    , _gammaLabel("Gamma")
    , _contrastLabel("Contrast")
    , _brightnessLabel("Brightness")
    , _msaaLabel("MSAA")
    , _alpha("Alpha")
    , _fxaa("FXAA")
    , _stereoLabel("Stereo")
    , _positionLabel("Position")
    , _sizeLabel("Size")
    , _resolutionLabel("Resolution")
    , _viewOptionLabel("View Option")
{
    QObject::connect(
        &_deleteWindow, SIGNAL(pressed()),
        this, SIGNAL(removeWindow())
    );

    _viewOption.addItems({
        ""
        "Fisheye",
        "PlaneProjection",
        "Viewplane"
    });

    QGridLayout* layout = new QGridLayout;

    layout->addWidget(&_deleteWindow, 0, 0, 1, 6);

    layout->addWidget(&_nameLabel, 1, 0);
    layout->addWidget(&_name, 1, 1);

    layout->addWidget(&_fullScreen, 2, 0);
    layout->addWidget(&_floating, 2, 1);
    layout->addWidget(&_border, 2, 2);
    layout->addWidget(&_dbuffered, 2, 3);

    layout->addWidget(&_monitorIndexLabel, 3, 0);
    layout->addWidget(&_monitorIndex, 3, 1);

    layout->addWidget(&_gammaLabel, 4, 0);
    layout->addWidget(&_gamma, 4, 1);
    layout->addWidget(&_contrastLabel, 4, 2);
    layout->addWidget(&_contrast, 4, 3);
    layout->addWidget(&_brightnessLabel, 4, 4);
    layout->addWidget(&_brightness, 4, 5);

    layout->addWidget(&_msaaLabel, 5, 0);
    layout->addWidget(&_msaa, 5, 1);
    layout->addWidget(&_alpha, 5, 2);
    layout->addWidget(&_fxaa, 5, 3);

    layout->addWidget(&_stereoLabel, 6, 0);
    layout->addWidget(&_stereo, 6, 1);

    layout->addWidget(&_positionLabel, 7, 0);
    layout->addWidget(&_xPosition, 7, 1);
    layout->addWidget(&_yPosition, 7, 2);

    layout->addWidget(&_sizeLabel, 8, 0);
    layout->addWidget(&_xSize, 8, 1);
    layout->addWidget(&_ySize, 8, 2);
    layout->addWidget(&_resolutionLabel, 8, 3);
    layout->addWidget(&_xResolution, 8, 4);
    layout->addWidget(&_yResolution, 8, 5);

    layout->addWidget(&_viewOptionLabel, 9, 0);
    layout->addWidget(&_viewOption, 9, 1);

    layout->addWidget(&_fisheyeWidget, 10, 0, 1, 6);
    layout->addWidget(&_planeProjectionWidget, 10, 0, 1, 6);
    layout->addWidget(&_viewPlaneWidget, 10, 0, 1, 6);

    setLayout(layout);

    _fisheyeWidget.hide();
    _planeProjectionWidget.hide();
    _viewPlaneWidget.hide();
}

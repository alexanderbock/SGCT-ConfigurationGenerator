#include "node/viewplanewidget.h"

ViewPlaneWidget::ViewPlaneWidget()
    : QGroupBox("ViewPlane")
{
    _eye.addItems({
        "center",
        "left",
        "right"
    });

    _projectionType.addItems({
        "PlanarProjection",
        "Viewplane"
    });
}

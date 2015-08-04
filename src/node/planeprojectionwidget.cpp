#include "node/planeprojectionwidget.h"

PlaneProjectionWidget::PlaneProjectionWidget()
    : QGroupBox("Viewport")
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

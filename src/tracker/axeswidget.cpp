#include "tracker/axeswidget.h"

#include <QHBoxLayout>

AxesWidget::AxesWidget()
    : QGroupBox("Axes")
    , _deleteButton("Delete")
    , _countLabel("Count")
    , _addressLabel("VRPN Address")
{
    QObject::connect(
        &_deleteButton, SIGNAL(pressed()),
        this, SIGNAL(removeAxes())
    );

    QHBoxLayout* layout = new QHBoxLayout;

    layout->addWidget(&_countLabel);
    layout->addWidget(&_count);

    layout->addWidget(&_addressLabel);
    layout->addWidget(&_address);

    layout->addWidget(&_deleteButton);

    setLayout(layout);
}

QString AxesWidget::text() const {
    return "";
}

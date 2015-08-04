#include "tracker/buttonswidget.h"

#include <QHBoxLayout>

ButtonsWidget::ButtonsWidget()
    : QGroupBox("Buttons")
    , _deleteButton("Delete")
    , _countLabel("Count")
    , _addressLabel("VPRN Address")
{
    QObject::connect(
        &_deleteButton, SIGNAL(pressed()),
        this, SIGNAL(removeButtons())
    );

    QHBoxLayout* layout = new QHBoxLayout;

    layout->addWidget(&_countLabel);
    layout->addWidget(&_count);

    layout->addWidget(&_addressLabel);
    layout->addWidget(&_address);

    layout->addWidget(&_deleteButton);

    setLayout(layout);
}

QString ButtonsWidget::text() const {
    return "";
}

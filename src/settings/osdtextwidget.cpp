#include "settings/osdtextwidget.h"

#include <QGridLayout>

OSDTextWidget::OSDTextWidget()
    : QGroupBox("OnScreen Display Font")
    , _nameLabel("Font Name")
    , _pathLabel("Font Path")
    , _sizeLabel("Size")
    , _offsetLabel("Offset")
{
    QGridLayout* layout = new QGridLayout;

    layout->addWidget(&_nameLabel, 0, 0);
    layout->addWidget(&_name, 0, 1, 1, 2);
    layout->addWidget(&_pathLabel, 0, 3);
    layout->addWidget(&_path, 0, 4, 1, 2);
    
    layout->addWidget(&_sizeLabel, 1, 0);
    layout->addWidget(&_size, 1, 1);
    
    layout->addWidget(&_offsetLabel, 1, 3);
    layout->addWidget(&_xOffset, 1, 4);
    layout->addWidget(&_yOffset, 1, 5);

    setLayout(layout);
}

QString OSDTextWidget::text() const {
    return "";
}

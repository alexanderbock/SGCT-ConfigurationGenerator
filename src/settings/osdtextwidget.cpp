#include "settings/osdtextwidget.h"


OSDTextWidget::OSDTextWidget()
    : QGroupBox("OnScreen Display Font")
    , _nameLabel("Font Name")
    , _pathLabel("Font Path")
    , _sizeLabel("Size")
    , _offsetLabel("Offset")
{
    setCheckable(true);
    QObject::connect(
        this, SIGNAL(toggled(bool)),
        this, SLOT(checked(bool))
    );
        

    _layout.addWidget(&_nameLabel, 0, 0);
    _layout.addWidget(&_name, 0, 1, 1, 2);
    _layout.addWidget(&_pathLabel, 0, 3);
    _layout.addWidget(&_path, 0, 4, 1, 2);
    
    _layout.addWidget(&_sizeLabel, 1, 0);
    _layout.addWidget(&_size, 1, 1);
    
    _layout.addWidget(&_offsetLabel, 1, 3);
    _layout.addWidget(&_xOffset, 1, 4);
    _layout.addWidget(&_yOffset, 1, 5);

    setLayout(&_layout);
}

QString OSDTextWidget::text() const {
    return "";
}

void OSDTextWidget::checked(bool on) {
    for (int i = 0; i < _layout.count(); ++i)
        dynamic_cast<QWidgetItem*>(_layout.itemAt(i))->widget()->setVisible(on);
    setFlat(!on);
}
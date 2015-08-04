#include "user/userwidget.h"

UserWidget::UserWidget()
    : QGroupBox("Users")
    , _newUserButton("New User")
{
    QObject::connect(
        &_newUserButton, SIGNAL(pressed()),
        this, SLOT(addUser())
    );

    _layout = new QVBoxLayout;
    _layout->addWidget(&_newUserButton);
    setLayout(_layout);
}

void UserWidget::addUser() {
    IndividualUserWidget* w = new IndividualUserWidget;
    QObject::connect(
        w, SIGNAL(removeUser()),
        this, SLOT(removeUser())
    );

    _layout->addWidget(w);
    _userWidgets.append(w);
}

void UserWidget::removeUser() {
    QObject* o = sender();
    IndividualUserWidget* w = dynamic_cast<IndividualUserWidget*>(o);

    _layout->removeWidget(w);
    _userWidgets.removeOne(w);

    w->deleteLater();
}

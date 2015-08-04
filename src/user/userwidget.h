#include <QGroupBox>

#include "individualuserwidget.h"

#include <QVBoxLayout>
#include <QList>
#include <QPushButton>

class UserWidget : public QGroupBox {
Q_OBJECT
public:
    UserWidget();

public slots:
    void removeUser();

private slots:
    void addUser();

private:
    QVBoxLayout* _layout;
    QPushButton _newUserButton;

    QList<IndividualUserWidget*> _userWidgets;
};

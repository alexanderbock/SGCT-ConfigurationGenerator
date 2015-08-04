#include <QGroupBox>

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class ButtonsWidget : public QGroupBox {
Q_OBJECT
public:
    ButtonsWidget();

    QString text() const;

signals:
    void removeButtons();

private:
    QPushButton _deleteButton;

    QLabel _countLabel;
    QLineEdit _count;

    QLabel _addressLabel;
    QLineEdit _address;
};

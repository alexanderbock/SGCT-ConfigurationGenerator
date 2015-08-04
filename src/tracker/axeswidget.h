#include <QGroupBox>

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class AxesWidget : public QGroupBox {
Q_OBJECT
public:
    AxesWidget();

    QString text() const;

signals:
    void removeAxes();

private:
    QPushButton _deleteButton;

    QLabel _countLabel;
    QLineEdit _count;

    QLabel _addressLabel;
    QLineEdit _address;
};

#include <QGroupBox>

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class SensorWidget : public QGroupBox {
Q_OBJECT
public:
    SensorWidget();

    QString text() const;

signals:
    void removeSensor();

private:
    QPushButton _deleteButton;

    QLabel _idLabel;
    QLineEdit _id;

    QLabel _addressLabel;
    QLineEdit _address;
};

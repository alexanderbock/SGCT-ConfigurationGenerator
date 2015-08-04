#include <QGroupBox>

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class IndividualUserWidget : public QGroupBox {
Q_OBJECT
public:
    IndividualUserWidget();

    QString text() const;

signals:
    void removeUser();

private:
    QPushButton _deleteButton;

    QLabel _nameLabel;
    QLineEdit _name;

    QLabel _eyeSeparationLabel;
    QLineEdit _eyeSeparation;

    QLabel _posLabel;
    QLineEdit _xPos;
    QLineEdit _yPos;
    QLineEdit _zPos;

    QLabel _orientationLabel;
    QLineEdit _xOrientation;
    QLineEdit _yOrientation;
    QLineEdit _zOrientation;

    QLabel _quaternionLabel;
    QLineEdit _xQuaternion;
    QLineEdit _yQuaternion;
    QLineEdit _zQuaternion;
    QLineEdit _wQuaternion;

    QLabel _trackingLabel;
    QLineEdit _tracker;
};

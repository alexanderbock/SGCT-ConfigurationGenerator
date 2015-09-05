#include <QGroupBox>

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>

class OSDTextWidget : public QGroupBox {
Q_OBJECT
public:
    OSDTextWidget();

    QString text() const;

private slots:
    void checked(bool on);

private:
    QGridLayout _layout;

    QLabel _nameLabel;
    QLineEdit _name;
    QLabel _pathLabel;
    QLineEdit _path;
    QLabel _sizeLabel;
    QLineEdit _size;
    QLabel _offsetLabel;
    QLineEdit _xOffset;
    QLineEdit _yOffset;
};

#include <QGroupBox>

#include <QLabel>
#include <QLineEdit>

class OSDTextWidget : public QGroupBox {
Q_OBJECT
public:
    OSDTextWidget();

    QString text() const;

private:
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
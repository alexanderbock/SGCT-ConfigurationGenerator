#include <QGroupBox>

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>

class CaptureWidget : public QGroupBox {
Q_OBJECT
public:
    CaptureWidget();

    QString text() const;

private slots:
    void checked(bool on);

private:
    QGridLayout _layout;

    QLabel _allPathLabel;
    QLineEdit _allPath;

    QLabel _monoPathLabel;
    QLineEdit _monoPath;

    QLabel _leftPathLabel;
    QLineEdit _leftPath;

    QLabel _rightPathLabel;
    QLineEdit _rightPath;

    QLabel _formatLabel;
    QLineEdit _format;

};

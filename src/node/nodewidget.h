#include <QGroupBox>

#include "node/windowwidget.h"

#include <QCheckBox>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QList>
#include <QPushButton>

class NodeWidget : public QGroupBox {
Q_OBJECT
public:
    NodeWidget();

    QString text() const;

public slots:
    void removeWindow();

private slots:
    void addWindow();

signals:
    void removeNode();

private:
    QGridLayout* _layout;

    QPushButton _deleteNode;

    QLabel _addressLabel;
    QLineEdit _address;

    QLabel _portLabel;
    QLineEdit _port;

    QLabel _nameLabel;
    QLineEdit _name;

    QCheckBox _swapLock;

    QLabel _syncPortLabel;
    QLineEdit _syncPort;

    QLabel _dataTransferPortLabel;
    QLineEdit _dataTransferPort;

    QPushButton _addWindowButton;

    QList<WindowWidget*> _windowWidgets;

};
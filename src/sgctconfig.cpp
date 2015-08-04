#include "sgctconfig.h"

#include <QGridLayout>
#include <QGroupBox>
#include <QVBoxLayout>

SGCTConfigWidget::SGCTConfigWidget(QWidget* parent, Qt::WindowFlags flags)
    : QWidget(parent, flags)
    , _masterAddressLabel("Master Address")
    , _masterAddress("localhost")
    , _debugMode("Debug Mode")
    , _externalControlPortLabel("External Control Port")
    , _externalControlPort("20500")
    , _firmSync("Firm Sync")
    , _newNodeButton("New Node")
{
    QBoxLayout* mainLayout = new QVBoxLayout;

    {
        QGroupBox* box = new QGroupBox;
        QGridLayout* layout = new QGridLayout;
        layout->setColumnMinimumWidth(2, 50);

        layout->addWidget(&_masterAddressLabel, 0, 0, Qt::AlignLeft);
        layout->addWidget(&_masterAddress, 0, 1, Qt::AlignRight);

        layout->addWidget(&_externalControlPortLabel, 0, 3, Qt::AlignLeft);
        layout->addWidget(&_externalControlPort, 0, 4, Qt::AlignRight);

        layout->addWidget(&_debugMode, 0, 5);
        layout->addWidget(&_firmSync, 0, 6);

        box->setLayout(layout);
        mainLayout->addWidget(box);
    }


    mainLayout->addWidget(&_settingsWidget);
    mainLayout->addWidget(&_sceneWidget);
    mainLayout->addWidget(&_captureWidget);
    mainLayout->addWidget(&_userWidget);
    mainLayout->addWidget(&_trackerWidget);

    mainLayout->addWidget(&_newNodeButton);
    
    setLayout(mainLayout);
}
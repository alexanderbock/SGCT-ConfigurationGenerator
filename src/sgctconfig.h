#include <QWidget>

#include "capture/capturewidget.h"
#include "node/nodewidget.h"
#include "scene/scenewidget.h"
#include "settings/settingswidget.h"
#include "tracker/trackerwidget.h"
#include "user/userwidget.h"

#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QList>
#include <QPushButton>
#include <QSlider>

class SGCTConfigWidget : public QWidget {
Q_OBJECT
public:
    SGCTConfigWidget(QWidget* parent = nullptr, Qt::WindowFlags flags = 0);

private:
    QLabel _masterAddressLabel;
    QLineEdit _masterAddress;
    QCheckBox _debugMode;
    QLabel _externalControlPortLabel;
    QLineEdit _externalControlPort;
    QCheckBox _firmSync;

    SettingsWidget _settingsWidget;
    SceneWidget _sceneWidget;
    CaptureWidget _captureWidget;
    UserWidget _userWidget;
    TrackerWidget _trackerWidget;

    QPushButton _newNodeButton;

    QList<NodeWidget*> _nodeWidgets;
};

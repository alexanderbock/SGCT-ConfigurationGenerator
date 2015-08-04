#include <QWidget>

class SceneWidget : public QWidget {
Q_OBJECT
public:
    SceneWidget(QWidget* parent = nullptr, Qt::WindowFlags flags = 0);
};
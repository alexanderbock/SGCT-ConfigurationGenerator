#include <QApplication>

#include "sgctconfig.h"

#include <QScrollArea>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
//    app.setStyleSheet(style);

    QScrollArea scrollArea;
    scrollArea.setWidgetResizable(true);

    SGCTConfigWidget* widget = new SGCTConfigWidget;
    scrollArea.setWidget(widget);
    scrollArea.show();
    
    return app.exec();
}
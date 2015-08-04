#include <QApplication>

#include "sgctconfig.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);
//    app.setStyleSheet(style);

    SGCTConfigWidget widget;
    widget.show();
    
    return app.exec();
}
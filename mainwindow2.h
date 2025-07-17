#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "ville.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();
    void setVilleData(const ville &v);

private:
    Ui::MainWindow2 *ui;
    ville city;
};

#endif // MAINWINDOW2_H

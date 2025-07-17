#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    city("Default", 0.0f, 0, 0),
    window2(nullptr)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::openMainWindow2);
}

MainWindow::~MainWindow() {
    delete ui;
    if (window2) delete window2;
}

void MainWindow::openMainWindow2() {
    QString nom = ui->textEdit->toPlainText();
    float budget = ui->textEdit_2->toPlainText().toFloat();
    int resEau = ui->spinBox->value();
    int resElec = ui->spinBox_2->value();

    city = ville(nom.toStdString(), budget, resEau, resElec);

    if (!window2) {
        window2 = new MainWindow2(this);
    }
    window2->setVilleData(city);

    this->hide();
    window2->show();
}

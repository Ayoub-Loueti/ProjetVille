#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow2), city("Default", 0.0f, 0, 0)
{
    ui->setupUi(this);
}

MainWindow2::~MainWindow2() {
    delete ui;
}

void MainWindow2::setVilleData(const ville &v) {
    city = v;

    ui->textBrowser->append("\nNom de la Ville: " + QString::fromStdString(city.getNom()));
    ui->textBrowser_2->append("\nBudget: " + QString::number(city.getBudget()));
    ui->textBrowser_3->append("\nPopulation: " + QString::number(city.getPopulation()));
    ui->textBrowser_4->append("\nRessources Totales: " + QString::number(city.getTotalRessources()));
    ui->textBrowser_5->append("\nSatisfaction: " + QString::number(city.getSatisfaction()));
}


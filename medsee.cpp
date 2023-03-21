#include "medsee.h"
#include "./ui_medsee.h"

MedSee::MedSee(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MedSee)
{
    ui->setupUi(this);
}

MedSee::~MedSee()
{
    delete ui;
}


void MedSee::on_loginButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


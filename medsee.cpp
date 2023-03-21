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


void MedSee::on_addVisitPageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MedSee::on_editPatentPageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MedSee::on_searchPatentPageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MedSee::on_seeReportPageButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MedSee::on_addVisitSearchButtonByID_clicked()
{
    ui->addVisitStackedWidget->setCurrentIndex(1);
}


void MedSee::on_addVisitSearchButtonByName_clicked()
{
//    ui->stackedWidget->stackedWidget_2->setCurrentIndex(2);
    ui->addVisitStackedWidget->setCurrentIndex(2);
}


void MedSee::on_addVisitSearchButtonByMobileNo_clicked()
{
//    ui->stackedWidget->stackedWidget_2->setCurrentIndex(1);
    ui->addVisitStackedWidget->setCurrentIndex(1);
}


void MedSee::on_addPatentButton_clicked()
{
    ui->addVisitStackedWidget->setCurrentIndex(2);
}


void MedSee::on_addVisitButton_clicked()
{
    ui->addVisitStackedWidget->setCurrentIndex(3);
}


void MedSee::on_editPatentSearchButtonByID_clicked()
{
    ui->editPatentStackedWidget->setCurrentIndex(1);
}




void MedSee::on_editPatentSearchButtonByName_clicked()
{
    ui->editPatentStackedWidget->setCurrentIndex(1);
}


void MedSee::on_editPatentSearchButtonByMobileNo_clicked()
{
    ui->editPatentStackedWidget->setCurrentIndex(1);
}


void MedSee::on_editPatentButton_clicked()
{
    ui->editPatentStackedWidget->setCurrentIndex(2);
}


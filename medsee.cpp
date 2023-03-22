#include "medsee.h"
#include "./ui_medsee.h"

// After test

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


void MedSee::on_searchPatentSearchButtonByID_clicked()
{
    ui->searchPatentStackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchPatentSearchButtonByName_clicked()
{
    ui->searchPatentStackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchPatentSearchButtonByMobileNo_clicked()
{
    ui->searchPatentStackedWidget->setCurrentIndex(1);
}


void MedSee::on_seeReportSearchButtonByID_clicked()
{
    ui->seeReportStackedWidget->setCurrentIndex(1);
}


void MedSee::on_seeReportSearchButtonByName_clicked()
{
    ui->seeReportStackedWidget->setCurrentIndex(1);
}


void MedSee::on_seeReportSearchButtonByMobileNo_clicked()
{
    ui->seeReportStackedWidget->setCurrentIndex(1);
}


void MedSee::on_addVisitSearchPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_addPatentPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MedSee::on_addVisitPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MedSee::on_addingVisitSuccessfulPageDoneButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_editPatentSearchPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_editPatentPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MedSee::on_editingPatentSuccessfulPageDoneButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchPatentPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchResultPageDoneButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_seeReportSearchPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MedSee::on_reportPageDoneButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_nursePageLogoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


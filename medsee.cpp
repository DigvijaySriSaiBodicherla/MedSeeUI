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
//    ui->stackedWidget->setCurrentIndex(6);
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
    ui->addVisitStackedWidget->setCurrentIndex(0);
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
    ui->editPatentStackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchPatentPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchResultPageDoneButton_clicked()
{
    ui->searchPatentStackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
}


void MedSee::on_seeReportSearchPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MedSee::on_reportPageDoneButton_clicked()
{
    ui->seeReportStackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
//    ui->seeReportStackedWidget->setCurrentIndex(0);
}


void MedSee::on_nursePageLogoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MedSee::on_doctorPageLogoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MedSee::on_searchPatentPageDoctorButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MedSee::on_seeReportPageDoctorButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MedSee::on_addStudyPageButton_clicked()
{
    ui->doctorPageStackedWidget->setCurrentIndex(1);
}


void MedSee::on_addSeriesPageButton_clicked()
{
    ui->doctorPageStackedWidget->setCurrentIndex(2);
}


void MedSee::on_addExamPageButton_clicked()
{
    ui->doctorPageStackedWidget->setCurrentIndex(3);
}


void MedSee::on_searchByVisitIdPageButton_clicked()
{
    ui->addStudyStackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchByVisitIdPageBackButton_clicked()
{
    ui->doctorPageStackedWidget->setCurrentIndex(0);
}




void MedSee::on_addingStudySuccessfulPageDoneButton_clicked()
{
    ui->addStudyStackedWidget->setCurrentIndex(0);
//    ui->addSeriesStackedWidget->setCurrentIndex(1);
    ui->doctorPageStackedWidget->setCurrentIndex(2);
    ui->addSeriesStackedWidget->setCurrentIndex(1);
}


void MedSee::on_addStudyButton_clicked()
{
    ui->addStudyStackedWidget->setCurrentIndex(2);
}


void MedSee::on_searchByStudyIdPageBackButton_clicked()
{
    ui->doctorPageStackedWidget->setCurrentIndex(0);
}


void MedSee::on_searchByStudyIdPageButton_clicked()
{
    ui->addSeriesStackedWidget->setCurrentIndex(1);
}


void MedSee::on_addSeriesPageBackButton_clicked()
{
    ui->addSeriesStackedWidget->setCurrentIndex(0);
}


void MedSee::on_addSeriesButton_clicked()
{
    ui->addSeriesStackedWidget->setCurrentIndex(2);
}


void MedSee::on_addingSeriesSuccessfulPageDoneButton_clicked()
{
    ui->addSeriesStackedWidget->setCurrentIndex(0);
//    ui->addExamStackedWidget->setCurrentIndex(1);
    ui->doctorPageStackedWidget->setCurrentIndex(3);
    ui->addExamStackedWidget->setCurrentIndex(1);
}


void MedSee::on_searchBySeriesIdPageBackButton_clicked()
{
    ui->doctorPageStackedWidget->setCurrentIndex(0);
}


void MedSee::on_searchBySeriesIdPageButton_clicked()
{
    ui->addExamStackedWidget->setCurrentIndex(1);
}


void MedSee::on_addExamPageBackButton_clicked()
{
    ui->addExamStackedWidget->setCurrentIndex(0);
}


void MedSee::on_addExamButton_clicked()
{
    ui->addExamStackedWidget->setCurrentIndex(2);
}


void MedSee::on_addingExamSuccessfulPageDoneButton_clicked()
{
    ui->addExamStackedWidget->setCurrentIndex(0);
    ui->doctorPageStackedWidget->setCurrentIndex(0);
}


void MedSee::on_addStudyPageBackButton_clicked()
{
    ui->addStudyStackedWidget->setCurrentIndex(0);
}


void MedSee::on_tempButtonLoginDoctor_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


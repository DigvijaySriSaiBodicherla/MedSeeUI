#ifndef MEDSEE_H
#define MEDSEE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MedSee; }
QT_END_NAMESPACE

class MedSee : public QWidget
{
    Q_OBJECT

public:
    MedSee(QWidget *parent = nullptr);
    ~MedSee();

private slots:
    void on_loginButton_clicked();

    void on_addVisitPageButton_clicked();

    void on_editPatentPageButton_clicked();

    void on_searchPatentPageButton_clicked();

    void on_seeReportPageButton_clicked();

    void on_addVisitSearchButtonByID_clicked();

    void on_addVisitSearchButtonByName_clicked();

    void on_addVisitSearchButtonByMobileNo_clicked();

    void on_addPatentButton_clicked();

    void on_addVisitButton_clicked();

    void on_editPatentSearchButtonByID_clicked();

    void on_editPatentSearchButtonByName_clicked();

    void on_editPatentSearchButtonByMobileNo_clicked();

    void on_editPatentButton_clicked();

    void on_searchPatentSearchButtonByID_clicked();

    void on_searchPatentSearchButtonByName_clicked();

    void on_searchPatentSearchButtonByMobileNo_clicked();

    void on_seeReportSearchButtonByID_clicked();

    void on_seeReportSearchButtonByName_clicked();

    void on_seeReportSearchButtonByMobileNo_clicked();

    void on_addVisitSearchPageBackButton_clicked();

    void on_addPatentPageBackButton_clicked();

    void on_addVisitPageBackButton_clicked();

    void on_addingVisitSuccessfulPageDoneButton_clicked();

    void on_editPatentSearchPageBackButton_clicked();

    void on_editPatentPageBackButton_clicked();

    void on_editingPatentSuccessfulPageDoneButton_clicked();

    void on_searchPatentPageBackButton_clicked();

    void on_searchResultPageDoneButton_clicked();

    void on_seeReportSearchPageBackButton_clicked();

    void on_reportPageDoneButton_clicked();

    void on_nursePageLogoutButton_clicked();

    void on_doctorPageLogoutButton_clicked();

    void on_searchPatentPageDoctorButton_clicked();

    void on_seeReportPageDoctorButton_clicked();

    void on_addStudyPageButton_clicked();

    void on_addSeriesPageButton_clicked();

    void on_addExamPageButton_clicked();

    void on_searchByVisitIdPageButton_clicked();

    void on_searchByVisitIdPageBackButton_clicked();


    void on_addingStudySuccessfulPageDoneButton_clicked();

    void on_addStudyButton_clicked();

    void on_searchByStudyIdPageBackButton_clicked();

    void on_searchByStudyIdPageButton_clicked();

    void on_addSeriesPageBackButton_clicked();

    void on_addSeriesButton_clicked();

    void on_addingSeriesSuccessfulPageDoneButton_clicked();

    void on_searchBySeriesIdPageBackButton_clicked();

    void on_searchBySeriesIdPageButton_clicked();

    void on_addExamPageBackButton_clicked();

    void on_addExamButton_clicked();

    void on_addingExamSuccessfulPageDoneButton_clicked();

    void on_addStudyPageBackButton_clicked();

    void on_tempButtonLoginDoctor_clicked();

private:
    Ui::MedSee *ui;
};
#endif // MEDSEE_H

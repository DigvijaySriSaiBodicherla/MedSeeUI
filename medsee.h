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

private:
    Ui::MedSee *ui;
};
#endif // MEDSEE_H

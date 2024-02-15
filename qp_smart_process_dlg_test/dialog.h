#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class LongOperationsClass;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_btn_call_test_clicked();

private:
    Ui::Dialog *ui;
    LongOperationsClass * locl;
};

#endif // DIALOG_H

#include "dialog1.h"                                                                         //dialog1用于显示欢迎界面
#include "ui_dialog1.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_0_clicked()
{
     accept();
}

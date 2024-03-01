#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->username_err->setVisible(false);
    ui->password_err->setVisible(false);
    ui->age_err->setVisible(false);
    ui->all_fields_err->setVisible(false);
}

Register::~Register()
{
    delete ui;
}

void Register::on_register_button_clicked()
{

}


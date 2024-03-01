#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "register.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_register_button_clicked()
{
    hide();
    Register* registerWindow = new Register(this);
    registerWindow->show();
}


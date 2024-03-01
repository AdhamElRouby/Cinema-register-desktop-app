#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "Users.h"
#include <QPixmap>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/welcome_img/img/cinema_welcome_img.jpg");
    ui->img_cover->setPixmap(pix);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::setWelcomeMessage(int userIndex) {
    ui->welcome_msg->setText("Hello " + usernames[userIndex] + " " + QString::number(ages[userIndex]) + "!");
}

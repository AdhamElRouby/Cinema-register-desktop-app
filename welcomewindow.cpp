#include "welcomewindow.h"
#include "ui_welcomewindow.h"
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

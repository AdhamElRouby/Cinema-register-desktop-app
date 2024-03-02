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
    // set all errors' visibility to false
    ui->username_err->setVisible(false);
    ui->password_err->setVisible(false);
    ui->age_err->setVisible(false);
    ui->all_fields_err->setVisible(false);
    bool isErr = false;

    // code to verify all fields are not empty
        // 1. check if line edits are empty
    bool isLineEditEmpty = (ui->register_userLineEdit->text().isEmpty() || ui->Register_passLineEdit->text().isEmpty()) ? true : false;
        // 2. check if the radio boxes are checked
    bool isGenderEmpty = (!ui->male_radio->isChecked() && !ui->female_radio->isChecked()) ? true : false;
    bool isAccTypeEmpty = (!ui->admin_radio->isChecked() && !ui->user_radio->isChecked()) ? true : false;
        // 3. check if none if the checkboxes are checked
    bool isGenreEmpty = true;
    QList<QCheckBox *> genreCheckBoxes = ui->genre_box->findChildren<QCheckBox *>();
    foreach(auto choice, genreCheckBoxes) {
        if(choice->isChecked()) {
            isGenreEmpty = false;
            break;
        }
    }

    if(isLineEditEmpty || isGenderEmpty || isAccTypeEmpty || isGenreEmpty) {
        isErr = true;
        ui->all_fields_err->setVisible(true);
    }

    // code to verify the age
    int userAge = 2024 - ui->year->currentText().toInt();
    if(userAge < 12) {
        isErr = true;
        ui->age_err->setVisible(true);
    }

    // code to verify the username and password


    // code after verifying all possible errors
    if(!isErr) {
        // code to add the new username, passowrd, and age + open the welcome window
    }
}

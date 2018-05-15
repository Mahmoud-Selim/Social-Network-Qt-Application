#include "addcomment.h"
#include "ui_addcomment.h"

AddComment::AddComment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddComment)
{
    ui->setupUi(this);
    commentBody = "";
    QWidget::setWindowIcon(QIcon(":/new/prefix1/logo.png"));
}

AddComment::~AddComment()
{
    delete ui;
}

void AddComment::on_AddComment_accepted()
{
    commentBody = ui->plainTextEdit->toPlainText();
}

QString AddComment::getCommentBody()
{
    return commentBody;
}

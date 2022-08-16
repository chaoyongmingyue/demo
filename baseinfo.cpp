#include "baseinfo.h"

BaseInfo::BaseInfo(QWidget *parent) : QWidget(parent)
{
    /*左侧*/
    UserNameLabel = new QLabel(tr("用户名："));
    UserNameLineEdit = new QLineEdit;
    NameLabel = new QLabel(tr("姓名："));
    NameLineEdit = new QLineEdit;
    SexLabel = new QLabel(tr("性别："));
    SexComboBox = new QComboBox;
    SexComboBox->addItem(tr("女："));
    SexComboBox->addItem(tr("男："));
    DepartmentLabel = new QLabel(tr("部门："));
    DepartmentTextEdit = new QTextEdit;
    AgeLabel = new QLabel(tr("年龄："));
    AgeLineEdit = new QLineEdit;
    OtherLabel = new QLabel(tr("备注："));
    OtherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    LeftLayout = new QGridLayout();
    LeftLayout->addWidget(UserNameLabel,1,0,0);
    LeftLayout->addWidget(UserNameLineEdit,0,1);
    LeftLayout->addWidget(NameLabel,1,1);

    /*右侧*/
}

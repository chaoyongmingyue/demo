#include "content.h"

Content::Content(QWidget *parent) : QFrame(parent)
{
    stack = new QStackedWidget(this);
    //对堆栈窗口的显示风格进行设置
    stack->setFrameStyle(QFrame::Panel|QFrame::Raised);
    //插入三个页面
    baseInfo = new BaseInfo();
    contact = new Contact();
    detail = new Detail();
    stack->addWidget(baseInfo);
    stack->addWidget(contact);
    stack->addWidget(detail);

    AmendBtn = new QPushButton(tr("修改"));
    CloseBtn = new QPushButton(tr("关闭"));

    QHBoxLayout *BtnLayout = new QHBoxLayout(this);
    BtnLayout->addStretch(1);
    BtnLayout->addWidget(AmendBtn);
    BtnLayout->addWidget(CloseBtn);

    QVBoxLayout  *RightLayout = new QVBoxLayout(this);
    RightLayout->setMargin(10);
    RightLayout->setSpacing(6);
    RightLayout->addWidget(stack);
    RightLayout->addLayout(RightLayout);
}

#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QSplitter>
#include <QListWidget>
#include "content.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font ("AR PL KaitiM GB", 12);
    a.setFont(font);
    //新建一个水平分割窗口对象，作为主布局框
    QSplitter *splitterMain = new QSplitter(Qt::Horizontal,0);
    splitterMain->setOpaqueResize(true);
    QListWidget *listWidget = new QListWidget(splitterMain);
    listWidget->insertItem(0,QObject::tr("基本信息"));
    listWidget->insertItem(1,QObject::tr("联系方式"));
    listWidget->insertItem(2,QObject::tr("详细资料"));
    Content *content =new Content(splitterMain);
    QObject::connect(listWidget,SIGNAL(currentRowChanged(int)),content->stack,
    SLOT(setCurrentindex (int)));
    // QObject::connect(listWidget,SIGNAL(currentRowChanged(int),content->stack,SLOT(setCurrentIndex(int)));
    splitterMain->setWindowTitle(QObject::tr("修改用户资料"));
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());
    splitterMain->show();
    MainWindow w;
    w.show();

    return a.exec();
}

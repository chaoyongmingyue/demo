#ifndef BASEINFO_H
#define BASEINFO_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>
#include <QPushButton>

class BaseInfo : public QWidget
{
    Q_OBJECT
public:
    explicit BaseInfo(QWidget *parent = nullptr);

signals:

public slots:

private:
    QLabel *UserNameLabel;
    QLabel *NameLabel; //用户名
    QLabel *SexLabel;
    QLabel *DepartmentLabel;


};

#endif // BASEINFO_H

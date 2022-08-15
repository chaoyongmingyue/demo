#ifndef CONTENT_H
#define CONTENT_H

#include <QObject>

class content : public QObject
{
    Q_OBJECT
public:
    explicit content(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CONTENT_H
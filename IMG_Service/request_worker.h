#ifndef REQUEST_WORKER_H
#define REQUEST_WORKER_H
#include <QObject>
#include <QString>

class Request_Worker : public QObject {
    Q_OBJECT
public:
    explicit Request_Worker(QObject *parent = nullptr) : QObject(parent) {}

public slots:
    void processRequest(const QString &rawStr);

signals:
    void requestProcessed(const std::string &response);
};

#endif // REQUEST_WORKER_H

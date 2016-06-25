#ifndef BADLIST_H
#define BADLIST_H

#include <QtCore>

namespace ProjectAICore{

    class badlist
    {
    public:
        badlist();
        void addBadList(QString Text);
        qint64 getBadListSize();
        QStringList getBadList(qint64 num);

    private:
        QStringList badlistadd;
    };

}

#endif // BADLIST_H

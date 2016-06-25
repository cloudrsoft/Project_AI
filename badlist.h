#ifndef BADLIST_H
#define BADLIST_H

#include <QtCore>

namespace ProjectAICore{

    class badlist
    {
    public:
        badlist();
        bool addBadList(QString Text);
        QStringList getBadList();

    private:
        QStringList badlistadd;
    };

}

#endif // BADLIST_H

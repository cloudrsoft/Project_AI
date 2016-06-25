#ifndef LISTSECOND_H
#define LISTSECOND_H

#include <QtCore>

namespace ProjectAICore{

    class listsecond
    {
    public:
        listsecond();
        void addList(QString Text);
        qint64 getListSize();
        QStringList getList(qint64 num);

    private:
        QStringList listadd;
    };

}

#endif // LISTSECOND_H

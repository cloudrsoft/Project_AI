#ifndef WRITE_H
#define WRITE_H

#include <QtCore>

namespace ProjectAIDB
{

    class write
    {
        public:
        write();
        bool writeFile(int filetype, QString Filename, int Data, bool isBad, qint64 score, QString FirstKeyword, QString SecondKeyword, QString ThirdKeyword, QStringList Keyword);
        /* ProjectAIDB의 형식
         * 1 Line : Type
         * 2 Line : Name
         * 3 Line : Data (Base)
         * 4 Line : isBad
         * 5 Line : score
         * 6 Line : FirstKeyword
         * 7 Line : SecondKeyword
         * 8 Line : ThirdKeyword
         * Other Line : OtherKeyword
        */
    };

}

#endif // WRITE_H

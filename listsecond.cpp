#include "listsecond.h"

namespace ProjectAICore
{

    listsecond::listsecond()
    {

    }

    void listsecond::addList(QString Text)
    {
        listadd.append(Text);
    }

    qint64 listsecond::getListSize() // aitext의 총 갯수를 리턴합니다
    {
        return listadd.size();
    }

    QStringList listsecond::getList(qint64 num) // 리턴형식 1. text 2. 차감/증가 여부 3. 차감/증가 점수
    {
        return QString(listadd.at(num)).split(":");
    }

    /* 차감/증가 여부를 나타내는 방법
       0 변화 없음
       1 차감
       2 증가
    */

}

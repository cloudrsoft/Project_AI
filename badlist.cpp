#include "badlist.h"

namespace ProjectAICore
{

    badlist::badlist()
    {

    }

    void badlist::addBadList(QString Text)
    {
        badlistadd.append(Text);
    }

    qint64 badlist::getBadListSize() // badtext의 총 갯수를 리턴합니다
    {
        return badlistadd.size();
    }

    QStringList badlist::getBadList(qint64 num) // 리턴형식 1. badtext 2. 차감/증가 여부 3. 차감/증가 점수
    {
        return QString(badlistadd.at(num)).split(":");
    }

    /* 차감/증가 여부를 나타내는 방법
       0 변화 없음
       1 차감
       2 증가
    */

}

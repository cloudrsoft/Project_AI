#ifndef CORE_H
#define CORE_H

#include <QtCore>
#include "badlist.h"

namespace ProjectAICore
{

    class core
    {
    public:
        core();

        /* Text 관련 영역 */

        QStringList splitText(QString Text); // Text를 나눈다 (구분으로)
        int feelText(QString Text); // 감정을 표현하는 텍스트를 구분해서 그 값에 맞게 리턴

        /* 감정 값
        1 = 기쁨
        2 = 슬픔
        3 = 화남
        0 = 보통 */

        /* Text 관련 영역 끝 */

        /* 변수 */
        badlist *bad = new badlist;
        int FEEL_NOMAL = 0;
        int FEEL_HAPPY = 1; // 감정번호 #1 기쁨
        int FEEL_BAD = 2; // 감정번호 #2 별로
        int FEEL_ANGRY = 3;
        int FEEL_NOMAL = 0;
    };

}

#endif // CORE_H

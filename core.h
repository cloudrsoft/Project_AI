#ifndef CORE_H
#define CORE_H

#include <QtCore>
#include "badlist.h"
#include "feel.h"

namespace ProjectAICore
{

    class core
    {
    public:
        core();

        /* Text 관련 영역 */

        QStringList splitText(QString Text); // Text를 나눈다 (구분으로)
        int feelText(QString Text); // 감정을 표현하는 텍스트를 구분해서 그 값에 맞게 리턴

        /* Text 관련 영역 끝 */

        /* 변수 */
        badlist *bad = new badlist;
    };

}

#endif // CORE_H

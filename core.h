/* Project AI (C) 2016. CloudR Soft Group Inc. */

#ifndef CORE_H
#define CORE_H

#include <QtCore>

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
       4 = 보통 */

    /* Text 관련 영역 끝 */
};

#endif // CORE_H

#ifndef FEEL_H
#define FEEL_H

namespace ProjectAICore
{

    class feel
    {
    public:
        feel();

        void setCurrentFeel(int FeelInfo);
        int getCurrentFeel();

        /* 변수 */
        int FEEL_NOMAL = 0;
        int FEEL_HAPPY = 1; // 감정번호 #1 기쁨
        int FEEL_BAD = 2; // 감정번호 #2 별로
        int FEEL_ANGRY = 3;

        /* 감정 값
        1 = 기쁨
        2 = 슬픔
        3 = 화남
        0 = 보통 */

    private:
        int currentfeel;
    };

}

#endif // FEEL_H

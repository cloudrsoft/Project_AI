#include "feel.h"

namespace ProjectAICore
{

    feel::feel()
    {

    }

    void feel::setCurrentFeel(int FeelInfo)
    {
        currentfeel = FeelInfo;
    }

    int feel::getCurrentFeel()
    {
        return currentfeel;
    }

}

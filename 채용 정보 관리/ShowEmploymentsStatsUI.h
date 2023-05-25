
#ifndef ShowEmploymentsStatsUI_h
#define ShowEmploymentsStatsUI_h


#include "ShowEmploymentsStats.h"

// ShowEmploymentsStats control

class ShowEmploymentsStatsUI
{
private:
    ShowEmploymentsStats *ShowEmploymentsStats_control;
public:
   ShowMyEmploymentsUI(ShowEmploymentsStats* control);
   void ShowEmploymentsStatsUI(CoporateMember *curMem);
};

#endif /* ShowEmploymentsStatsUI_hpp */

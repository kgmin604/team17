
#ifndef ShowMyEmploymentsUI_h
#define ShowMyEmploymentsUI_h


#include "ShowMyEmployments.h"

// ShowMyEmployments control

class ShowMyEmploymentsUI
{
private:
    ShowMyEmployments *ShowMyEmployments_control;
public:
   ShowMyEmploymentsUI(ShowMyEmployments* control);
   void ShowMyEmploymentsUI(coporateMember *curMem);
};
#endif /* ShowMyEmploymentsUI_hpp */


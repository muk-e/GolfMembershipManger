#ifndef __MEMBERSMANAGESERVICE_H__
#define __MEMBERSMANAGESERVICE_H__
#include <string>
#include "MembersEntity.h"
#include "MemberInfo.h"
#include "ComDev.h"
#include <vector>

enum {CARD_READER, CARD_REGISTER};

class MembersManageService
{
private:
    int membersManagerState;
    MembersEntity *membersEntity;
    ComDev  *comDev;
    int lastRecognizedCardId[5];

public:
    MembersManageService(ComDev *comDev);
    MembersManageService();
    virtual ~MembersManageService();
    void setComDev(ComDev *comDev);
    void updateStateEvent(std::string devName);
    void checkCardNumber(int *cardNum);
    void signup(char* memberInformation);
};

#endif /* __MEMBERSMANAGESERVICE_H__ */
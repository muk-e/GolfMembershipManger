#ifndef __MEMBERSMANAGESERVICE_H__
#define __MEMBERSMANAGESERVICE_H__
#include <string>
#include "MembersEntity.h"
#include "MemberInfo.h"

enum {CARD_READER, CARD_REGISTER};

class MembersManageService
{
private:
    int membersManagerState;
    MembersEntity *membersEntity;

public:
    MembersManageService();
    virtual ~MembersManageService();
    void updateStateEvent(std::string devName);
    void checkCardNumber(int *cardNum);
};

#endif /* __MEMBERSMANAGESERVICE_H__ */
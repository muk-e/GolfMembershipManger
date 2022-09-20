#ifndef __MEMBERSENTITY_H__
#define __MEMBERSENTITY_H__

#include <vector>
#include <iostream>
#include "MemberInfo.h"

class MembersEntity
{
private:
    std::vector<MemberInfo> vecMembersList;
    MemberInfo memberInfo;
    FILE *fpDBData;
    
public:
    MembersEntity();
    virtual ~MembersEntity();
    void loadMembersInfo();
    //void addMemberInfo(MemberInfo member);
    //void delMemberInfo(MemberInfo member);
    //void makeDBMembersInfo();
    void printMemberInfo();
};

#endif /* __MEMBERSENTITY_H__ */
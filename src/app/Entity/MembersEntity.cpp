#include "MembersEntity.h"

MembersEntity::MembersEntity()
{
    fpDBData = fopen("memberLists.bin", "r+");
    loadMembersInfo();
    printMemberInfo();
}

MembersEntity::~MembersEntity()
{
}

void MembersEntity::loadMembersInfo()
{
    while (fread(&memberInfo, sizeof(MemberInfo), 1, fpDBData))
    {
        vecMembersList.push_back(memberInfo);
    }
}

void MembersEntity::printMemberInfo()
{
    printf("%04d, %s, %s, %s, %0x-%0x-%0x-%0x-%0x\n",
           vecMembersList[10000].id,
           vecMembersList[10000].name,
           vecMembersList[10000].address,
           vecMembersList[10000].phoneNumber,
           vecMembersList[10000].cardNum[0],
           vecMembersList[10000].cardNum[1],
           vecMembersList[10000].cardNum[2],
           vecMembersList[10000].cardNum[3],
           vecMembersList[10000].cardNum[4]
           );
}
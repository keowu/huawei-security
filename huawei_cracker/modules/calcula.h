#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....

int __cdecl calcula(char* param_1, int param_2)

{
    size_t sVar1;
    int iVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned int uVar5;

    uVar5 = 0;
    sVar1 = strlen(param_1);
    iVar3 = 1;
    while (iVar3 != sVar1 + 1) {
        iVar2 = (int)param_1[iVar3 + -1];
        if (param_2 == 0xc9) {
            iVar2 = (iVar2 + 1 + iVar3 + -1) * iVar2 * (iVar2 + 0x139);
        }
        else {
            iVar2 = (iVar2 + 1 + iVar3 + -1) * iVar3;
        }
        uVar5 = uVar5 + iVar2;
        iVar3 = iVar3 + 1;
    }
    uVar4 = (unsigned int)((unsigned long long)((long long)(int)uVar5 * -0x6db6db6d) >> 0x20);
    return uVar5 + (((unsigned int)((unsigned long long)((long long)(int)uVar5 * 0x92492493) >> 0x22) |
        (((int)uVar5 >> 0x1f) + ((int)uVar4 >> 0x1f) + (unsigned int)(uVar5 + uVar4)) *
        0x40000000) - ((int)uVar5 >> 0x1f)) * -7;
}
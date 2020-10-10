#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....
#include "calculo_4.h"

int __cdecl littleXOR(byte* param_1)
{
    size_t sVar1;
    byte bVar2;
    size_t sVar3;

    sVar1 = strlen((char*)param_1);
    bVar2 = *param_1;
    if (sVar1 != 1) {
        sVar3 = 1;
        if (1 < (int)sVar1) {
            do {
                bVar2 = bVar2 ^ param_1[sVar3];
                sVar3 = sVar3 + 1;
            } while (sVar1 != sVar3);
        }
        return (int)(char)bVar2;
    }
    return (int)(char)(bVar2 ^ 0x5a);
}

void __cdecl calculo_5(char* IMEI, char* SECURITY_CODE)
{
    char cVar1;
    int iVar2;
    int iVar3;
    UINT* puVar4;
    UINT local_dc;
    UINT local_d8;
    UINT local_d4;
    UINT local_d0;
    UINT local_c9;
    UINT local_c5;
    UINT local_c1;
    UINT local_bd;
    UINT local_b9;
    UINT local_b5;
    UINT local_b1;
    UINT local_ad;
    UINT local_a9;
    UINT local_a8[2];
    UINT auStack160[144];

    iVar2 = 0x23;
    iVar3 = 0;
    local_c9 = 0x39333735;
    local_c5 = 0x32363431;
    local_c1 = 0x39303038;
    local_bd = 0x35363738;
    local_b9 = 0x31323334;
    local_b5 = 0x34333231;
    local_b1 = 0x38373635;
    local_ad = 0x353039;
    local_a9 = 0;
    puVar4 = local_a8;
    while (iVar2 != 0) {
        iVar2 = iVar2 + -1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    strcpy((char*)local_a8, IMEI);
    auStack160[7] = 0x5a;
    do {
        local_d8 = 0;
        local_d4 = 0;
        local_d0 = 0;
        local_dc = (UINT)CONCATENE2BYTESEM1(auStack160[iVar3], *(UINT*)((int)local_a8 + iVar3));
        iVar2 = littleXOR((byte*)&local_dc);
        SECURITY_CODE[iVar3] = (char)iVar2;
        iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
    iVar2 = 0;
    do {
        SECURITY_CODE[iVar2] =
            *(char*)((int)&local_c9 +
                ((UINT)(byte)SECURITY_CODE[iVar2] & 0xf) +
                ((int)(UINT)(byte)SECURITY_CODE[iVar2] >> 4));
        iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    if (*SECURITY_CODE != '0') {
        SECURITY_CODE[8] = '\0';
        return;
    }
    iVar2 = 1;
    do {
        if (SECURITY_CODE[iVar2] != '0') {
            cVar1 = (char)iVar2 + '0';
            goto exit;
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 != 8);
    cVar1 = '8';
exit:
    *SECURITY_CODE = cVar1;  //POSITION 0;
    SECURITY_CODE[8] = '\0';
    return;
}

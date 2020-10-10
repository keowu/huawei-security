#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....

#include "calculo_3.h"


UINT _fastcall CONCATENE2BYTESEM1(UINT BYTE, UINT BYTE2) {
    return (BYTE << 8) | BYTE2;
}

void __cdecl theBIGXOR(int* param_1, int* param_2)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    UINT uVar17;
    UINT uVar18;
    UINT uVar19;
    UINT uVar20;

    iVar1 = *param_2;
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    iVar5 = param_2[4];
    iVar6 = param_2[5];
    iVar7 = param_2[6];
    iVar8 = param_2[7];
    iVar9 = param_2[8];
    iVar10 = param_2[9];
    iVar11 = param_2[10];
    iVar12 = param_2[0xb];
    iVar13 = param_2[0xc];
    iVar14 = param_2[0xd];
    iVar15 = param_2[0xe];
    uVar20 = param_1[1];
    iVar16 = param_2[0xf];
    uVar19 = param_1[2];
    uVar18 = param_1[3];
    uVar17 = CONCATENE2BYTESEM1(*param_1 + iVar1 + -0x28955b88 + (~uVar20 & uVar18 | uVar19 & uVar20), 0x19);
    uVar17 = uVar17 + uVar20;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar2 + -0x173848aa + (~uVar17 & uVar19 | uVar17 & uVar20), 0x14);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar3 + 0x242070db + (~uVar18 & uVar20 | uVar18 & uVar17), 0xf);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar4 + -0x3e423112 + (~uVar19 & uVar17 | uVar19 & uVar18), 10);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar5 + -0xa83f051 + (~uVar20 & uVar18 | uVar20 & uVar19), 0x19);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar6 + 0x4787c62a + (~uVar17 & uVar19 | uVar17 & uVar20), 0x14);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar7 + -0x57cfb9ed + (~uVar18 & uVar20 | uVar18 & uVar17), 0xf);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar8 + -0x2b96aff + (~uVar19 & uVar17 | uVar19 & uVar18), 10);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar9 + 0x698098d8 + (~uVar20 & uVar18 | uVar20 & uVar19), 0x19);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar10 + -0x74bb0851 + (~uVar17 & uVar19 | uVar17 & uVar20), 0x14);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar11 + -0xa44f + (~uVar18 & uVar20 | uVar18 & uVar17), 0xf);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar12 + -0x76a32842 + (~uVar19 & uVar17 | uVar19 & uVar18), 10);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar13 + 0x6b901122 + (~uVar20 & uVar18 | uVar20 & uVar19), 0x19);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar14 + -0x2678e6d + (~uVar17 & uVar19 | uVar17 & uVar20), 0x14);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar15 + -0x5986bc72 + (~uVar18 & uVar20 | uVar18 & uVar17), 0xf);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar16 + 0x49b40821 + (~uVar19 & uVar17 | uVar19 & uVar18), 10);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar2 + -0x9e1da9e + (uVar20 & uVar18 | ~uVar18 & uVar19), 0x1b);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar7 + -0x3fbf4cc0 + (uVar17 & uVar19 | ~uVar19 & uVar20), 0x17);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar12 + 0x265e5a51 + (uVar18 & uVar20 | ~uVar20 & uVar17), 0x12);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar1 + -0x16493856 + (uVar19 & uVar17 | ~uVar17 & uVar18), 0xc);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar6 + -0x29d0efa3 + (uVar20 & uVar18 | ~uVar18 & uVar19), 0x1b);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar11 + 0x2441453 + (uVar17 & uVar19 | ~uVar19 & uVar20), 0x17);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar16 + -0x275e197f + (uVar18 & uVar20 | ~uVar20 & uVar17), 0x12);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar5 + -0x182c0438 + (uVar19 & uVar17 | ~uVar17 & uVar18), 0xc);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar10 + 0x21e1cde6 + (uVar20 & uVar18 | ~uVar18 & uVar19), 0x1b);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar15 + -0x3cc8f82a + (uVar17 & uVar19 | ~uVar19 & uVar20), 0x17);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar4 + -0xb2af279 + (uVar18 & uVar20 | ~uVar20 & uVar17), 0x12);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar9 + 0x455a14ed + (uVar19 & uVar17 | ~uVar17 & uVar18), 0xc);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar14 + -0x561c16fb + (uVar20 & uVar18 | ~uVar18 & uVar19), 0x1b);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar3 + -0x3105c08 + (uVar17 & uVar19 | ~uVar19 & uVar20), 0x17);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar8 + 0x676f02d9 + (uVar18 & uVar20 | ~uVar20 & uVar17), 0x12);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar13 + -0x72d5b376 + (uVar19 & uVar17 | ~uVar17 & uVar18), 0xc);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar6 + -0x5c6be + (uVar19 ^ uVar18 ^ uVar20), 0x1c);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar9 + -0x788e097f + (uVar20 ^ uVar19 ^ uVar17), 0x15);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar12 + 0x6d9d6122 + (uVar17 ^ uVar20 ^ uVar18), 0x10);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar15 + -0x21ac7f4 + (uVar18 ^ uVar17 ^ uVar19), 9);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar2 + -0x5b4115bc + (uVar19 ^ uVar18 ^ uVar20), 0x1c);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar5 + 0x4bdecfa9 + (uVar20 ^ uVar19 ^ uVar17), 0x15);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar8 + -0x944b4a0 + (uVar17 ^ uVar20 ^ uVar18), 0x10);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar11 + -0x41404390 + (uVar18 ^ uVar17 ^ uVar19), 9);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar14 + 0x289b7ec6 + (uVar19 ^ uVar18 ^ uVar20), 0x1c);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar1 + -0x155ed806 + (uVar20 ^ uVar19 ^ uVar17), 0x15);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar4 + -0x2b10cf7b + (uVar17 ^ uVar20 ^ uVar18), 0x10);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar7 + 0x4881d05 + (uVar18 ^ uVar17 ^ uVar19), 9);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar10 + -0x262b2fc7 + (uVar19 ^ uVar18 ^ uVar20), 0x1c);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar13 + -0x1924661b + (uVar20 ^ uVar19 ^ uVar17), 0x15);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar16 + 0x1fa27cf8 + (uVar17 ^ uVar20 ^ uVar18), 0x10);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar3 + -0x3b53a99b + (uVar18 ^ uVar17 ^ uVar19), 9);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar1 + -0xbd6ddbc + ((~uVar18 | uVar20) ^ uVar19), 0x1a);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar8 + 0x432aff97 + ((~uVar19 | uVar17) ^ uVar20), 0x16);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar15 + -0x546bdc59 + ((~uVar20 | uVar18) ^ uVar17), 0x11);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar6 + -0x36c5fc7 + ((~uVar17 | uVar19) ^ uVar18), 0xb);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar13 + 0x655b59c3 + ((~uVar18 | uVar20) ^ uVar19), 0x1a);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar4 + -0x70f3336e + ((~uVar19 | uVar17) ^ uVar20), 0x16);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar11 + -0x100b83 + ((~uVar20 | uVar18) ^ uVar17), 0x11);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar2 + -0x7a7ba22f + ((~uVar17 | uVar19) ^ uVar18), 0xb);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar9 + 0x6fa87e4f + ((~uVar18 | uVar20) ^ uVar19), 0x1a);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar16 + -0x1d31920 + ((~uVar19 | uVar17) ^ uVar20), 0x16);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar7 + -0x5cfebcec + ((~uVar20 | uVar18) ^ uVar17), 0x11);
    uVar19 = uVar18 + uVar19;
    uVar20 = CONCATENE2BYTESEM1(uVar20 + iVar14 + 0x4e0811a1 + ((~uVar17 | uVar19) ^ uVar18), 0xb);
    uVar20 = uVar19 + uVar20;
    uVar17 = CONCATENE2BYTESEM1(uVar17 + iVar5 + -0x8ac817e + ((~uVar18 | uVar20) ^ uVar19), 0x1a);
    uVar17 = uVar20 + uVar17;
    uVar18 = CONCATENE2BYTESEM1(uVar18 + iVar12 + -0x42c50dcb + ((~uVar19 | uVar17) ^ uVar20), 0x16);
    uVar18 = uVar17 + uVar18;
    uVar19 = CONCATENE2BYTESEM1(uVar19 + iVar3 + 0x2ad7d2bb + ((~uVar20 | uVar18) ^ uVar17), 0x11);
    *param_1 = *param_1 + uVar17; // POS 0 DO ARRAY
    uVar19 = uVar18 + uVar19;
    uVar17 = CONCATENE2BYTESEM1(uVar20 + iVar10 + -0x14792c6f + ((~uVar17 | uVar19) ^ uVar18), 0xb);
    param_1[2] = param_1[2] + uVar19;
    param_1[3] = param_1[3] + uVar18;
    param_1[1] = param_1[1] + uVar17 + uVar19;
    return;
}

void __cdecl memTABLE(int* param_1, void* param_2, size_t param_3)
{
    int iVar1;
    void* _Dst;
    int iVar2;
    size_t sVar3;
    size_t sVar4;
    size_t sVar5;
    int* piVar6;
    int iVar7;
    size_t _Size;
    UINT uVar8;

    iVar2 = param_1[4];
    iVar1 = param_3 * 8;
    iVar7 = iVar2 + iVar1;
    param_1[4] = iVar7;
    if (iVar1 - iVar7 == 0 || iVar1 < iVar7) {
        iVar7 = param_1[5];
    }
    else {
        iVar7 = param_1[5] + 1;
    }
    uVar8 = iVar2 >> 3 & 0x3f;
    _Size = 0x40 - uVar8;
    param_1[5] = ((int)param_3 >> 0x1d) + iVar7;
    _Dst = (void*)((int)param_1 + uVar8 + 0x18);
    if ((int)_Size <= (int)param_3) {
        memcpy(_Dst, param_2, _Size);
        theBIGXOR(param_1, param_1 + 6);
        sVar5 = _Size;
        sVar4 = -uVar8;
        while (sVar3 = sVar5, (int)(sVar4 + 0x7f) < (int)param_3) {
            piVar6 = (int*)((int)param_2 + _Size);
            _Size = _Size + 0x50;
            theBIGXOR(param_1, piVar6);
            //printf("\n posição menor 5=%08x  maior 4=%08x", sVar3 + 0x40, _Size); //debbug descomente para ver a tabela sendo feita :D
            sVar5 = sVar3 + 0x40;
            sVar4 = sVar3;
        }
        memcpy(param_1, (void*)((int)param_2 + sVar3), param_3 - sVar3);
        return;
    }
    memcpy(_Dst, param_2, param_3);
    return;
}



void __cdecl FUN_00403750(char* param_1, int* param_2)
{
    size_t sVar1;
    int iVar2;
    UINT uVar3;
    UINT* puVar4;
    int* piVar5;
    bool bVar6;
    UINT local_e6;
    UINT local_e2;
    UINT local_be;
    UINT local_bc[10];
    int local_94[4];
    UINT local_84;
    UINT local_80;

    uVar3 = 0x2a;
    bVar6 = ((UINT)&local_be & 2) != 0;
    puVar4 = (UINT*)&local_be;
    if (bVar6) {
        uVar3 = 0x28;
        local_be = 0;
        puVar4 = local_bc;
    }
    uVar3 = uVar3 >> 2;
    while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    if (!bVar6) {
        *(UINT*)puVar4 = 0;
    }
    local_be = CONCATENE2BYTESEM1(local_be, 0x80);
    sVar1 = strlen(param_1);
    iVar2 = 0x16;
    piVar5 = local_94;
    while (iVar2 != 0) {
        iVar2 = iVar2 + -1;
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
    }
    local_94[0] = 0x67452301;
    local_94[1] = -0x10325477;
    local_94[2] = -0x67452302;
    local_94[3] = 0x10325476;
    memTABLE(local_94, param_1, sVar1);
    local_e6 = local_84;
    uVar3 = local_84 >> 3 & 0x3f;
    local_e2 = local_80;
    sVar1 = 0x38 - uVar3;
    if (0x37 < uVar3) {
        sVar1 = 0x78 - uVar3;
    }
    memTABLE(local_94, &local_be, sVar1);
    memTABLE(local_94, &local_e6, 8);
    *param_2 = local_94[0];
    param_2[1] = local_94[1];
    param_2[2] = local_94[2];
    param_2[3] = local_94[3];
    return;
}


void __cdecl calculo_4(char* IMEI, unsigned int* SECURITY_CODE, int SIZE)
{
    byte bVar1;
    size_t sVar2;
    UINT uVar3;
    UINT uVar4;
    int iVar5;
    byte* pbVar6;
    byte* pbVar7;
    int* piVar8;
    int local_1a8;
    UINT local_1a4;
    UINT local_1a0;
    UINT local_19c;
    UINT local_198;
    int local_194;
    UINT local_190;
    UINT local_18c;
    UINT local_188;
    UINT local_184;
    byte local_180[4];
    byte local_17c[96];
    int local_11c[67];

    local_184 = 0;
    if (SIZE == 2) {
        local_194 = 0x64697768;
        local_190 = 0x61646165;
        local_18c = 0x61636174;
        local_188 = 0x6472;
    }
    else {
        local_194 = 0x646b6664;
        local_190 = 0x6c6c666b;
        local_18c = 0x6f6b6b65;
        local_188 = 0x6b64;
    }
    iVar5 = 0x40;
    piVar8 = local_11c;
    while (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
    }
    local_1a8 = 0;
    local_1a4 = 0;
    local_1a0 = 0;
    local_19c = 0;
    local_198 = 0;
    FUN_00403750((char*)&local_194, &local_1a8);
    strcpy((char*)local_11c, IMEI);
    sVar2 = strlen(IMEI);
    *SECURITY_CODE = 0;
    SECURITY_CODE[1] = 0;
    *local_11c = local_1a8; //*(int*)(sVar2 + (int)local_11c) = local_1a8;                  0  + POINTER OF ARRAY
    local_11c[1] = local_1a4;//*(undefined4*)((int)local_11c + sVar2 + 4) = local_1a4;      4  + POINTER OF ARRAY
    local_11c[2] = local_1a0;//*(undefined4*)((int)local_11c + sVar2 + 8) = local_1a0;      8  + POINTER OF ARRAY
    local_11c[3] = local_19c;//*(undefined4*)((int)local_11c + sVar2 + 0xc) = local_19c;    C  + POINTER OF ARRAY
    FUN_00403750((char*)local_11c, &local_194);
    iVar5 = 0;
    do {
        local_180[iVar5] =
            *(byte*)((int)&local_190 + iVar5) ^ *(byte*)((int)&local_194 + iVar5) ^
            *(byte*)((int)&local_18c + iVar5) ^ *(byte*)((int)&local_188 + iVar5);
        iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    uVar4 = 0;
    pbVar6 = local_180;
    do {
        uVar3 = uVar4 << 8;
        pbVar7 = pbVar6 + 1;
        bVar1 = *pbVar6;
        uVar4 = (UINT)bVar1 | uVar3;
        pbVar6 = pbVar7;
    } while (pbVar7 != local_17c);
    //sprintf((char*)SECURITY_CODE, "%i", (UINT)bVar1 | uVar3 & 0x3ffffff | 0x2000000); FAZENDO UNS TESTES AQUI, SÓ IGNORE LOL
    return;
}
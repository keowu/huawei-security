#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....
#include "calculo_4.h"
#include "calculo_3.h"

void __cdecl best_XOR(int* param_1, int* param_2)
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
    *param_1 = *param_1 + uVar17;
    uVar19 = uVar18 + uVar19;
    uVar17 = CONCATENE2BYTESEM1(iVar10 + -0x14792c6f + ((~uVar17 | uVar19) ^ uVar18) + uVar20, 0xb);
    param_1[2] = param_1[2] + uVar19;
    param_1[3] = param_1[3] + uVar18;
    param_1[1] = param_1[1] + uVar17 + uVar19;
    return;
}

void __cdecl fixDeslocVal(int* param_1, void* param_2, size_t param_3)
{
    int iVar1;
    size_t sVar2;
    size_t sVar3;
    UINT uVar4;
    int iVar5;
    size_t _Size;

    iVar1 = param_3 * 8;
    iVar5 = param_1[4] + iVar1;
    uVar4 = param_1[4] >> 3 & 0x3f;
    param_1[4] = iVar5;
    if (iVar1 - iVar5 == 0 || iVar1 < iVar5) {
        iVar5 = param_1[5];
    }
    else {
        iVar5 = param_1[5] + 1;
    }
    _Size = 0x40 - uVar4;
    param_1[5] = ((int)param_3 >> 0x1d) + iVar5;
    if ((int)_Size <= (int)param_3) {
        memcpy(param_1 + ((int)uVar4 >> 2) + 6, param_2, _Size);
        best_XOR(param_1, param_1 + 6);
        sVar3 = -uVar4;
        while (sVar2 = _Size, (int)(sVar3 + 0x7f) < (int)param_3) {
            best_XOR(param_1, (int*)((int)param_2 + sVar2));
            _Size = sVar2 + 0x40;
            sVar3 = sVar2;
        }
        memcpy(param_1 + 6, (void*)(sVar2 + (int)param_2), param_3 - sVar2);
        return;
    }
    memcpy(param_1 + ((int)uVar4 >> 2) + 6, param_2, param_3);
    return;
}

void __cdecl calculo_7(int param_1, unsigned int* param_2, int param_3)
{
    char* pcVar1;
    char* pcVar2;
    UINT uVar3;
    int iVar4;
    UINT uVar5;
    UINT* puVar6;
    UINT uVar7;
    char cVar8;
    int iVar9;
    int iVar10;
    size_t sVar11;
    byte bVar12;
    int iVar13;
    int iVar14;
    UINT uVar15;
    int iVar16;
    UINT* puVar17;
    bool bVar18;
    UINT local_1ec;
    int local_1e8;
    UINT local_1d0;
    UINT local_1cf;
    UINT local_1ce;
    UINT local_1cd;
    UINT local_1cc;
    UINT local_1cb;
    UINT local_1ca;
    UINT local_1c9;
    UINT local_1c8;
    UINT local_1c7;
    UINT local_1c6;
    UINT local_1c5;
    UINT local_1c4;
    UINT local_1c3;
    UINT local_1c2;
    UINT local_1c1;
    UINT local_1c0;
    UINT local_1bf;
    UINT local_1be;
    UINT local_1bd;
    UINT local_1bc;
    UINT local_1bb;
    UINT local_1ba;
    UINT local_1b9;
    UINT local_1b8[16];
    UINT local_178[3];
    char cStack361;
    UINT local_16c;
    UINT local_168;
    UINT local_164;
    UINT local_160;
    UINT local_15c;
    UINT local_158;
    UINT local_154;
    UINT local_150;
    int local_14c;
    UINT local_148;
    UINT local_114[4];
    int local_104;
    UINT local_100;
    UINT local_9c[2];
    byte local_94[132];

    iVar9 = 0x20;
    puVar6 = (UINT*)&local_1d0;
    if (param_3 != 0xc9) {
        puVar6 = (UINT*)&local_1c4;
    }
    local_1d0 = 0xb;
    local_1cf = 0xd;
    local_1ce = 0x11;
    *param_2 = 0; //pos 0 do array
    param_2[1] = 0;
    local_1cd = 0x13;
    local_1cc = 0x17;
    local_1cb = 0x1d;
    local_1ca = 0x1f;
    local_1c9 = 0x25;
    local_1c8 = 0x29;
    local_1c7 = 0x2b;
    local_1c6 = 0x3b;
    local_1c5 = 0x61;
    local_1c4 = 1;
    local_1c3 = 1;
    local_1c2 = 2;
    local_1c1 = 3;
    local_1c0 = 5;
    local_1bf = 8;
    local_1be = 0xd;
    local_1bd = 0x15;
    local_1bc = 0x22;
    local_1bb = 0x37;
    local_1ba = 0x59;
    local_1b9 = 0x90;
    param_2[2] = 0;//*(UINT*)(param_2 + 2) = 0; LIKE OMG IS THE CARA É O ENDEREÇO DO PONTEIRO DO ARRAY COM DOIS ENTÃO 2 ;0;
    puVar17 = local_9c;
    while (iVar9 != 0) {
        iVar9 = iVar9 + -1;
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
    }
    local_168 = 0;
    local_164 = 0;
    local_160 = 0;
    local_158 = *puVar6;
    local_150 = puVar6[2];
    local_15c = 0;
    local_154 = puVar6[1];
    iVar9 = 0x10;
    puVar17 = (UINT*)local_1b8;
    while (iVar9 != 0) {
        iVar9 = iVar9 + -1;
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
    }
    uVar3 = 0;
    iVar10 = 0;
    local_1b8[0] = 0x80;
    do {
        iVar13 = (int)*(char*)(param_1 + iVar9);
        if (iVar9 == iVar10 * 3) {
            bVar12 = (byte)(iVar13 >> 2) | (byte)(iVar13 << 6);
        }
        else {
            if (iVar9 + iVar10 * -3 == 1) {
                bVar12 = (byte)(iVar13 >> 3) | (byte)(iVar13 << 5);
            }
            else {
                bVar12 = (byte)(iVar13 << 4) | (byte)(iVar13 >> 4);
            }
        }
        *(byte*)((int)local_9c + iVar9) = bVar12;
        iVar9 = iVar9 + 1;
        bVar18 = 0xaaaaaaa9 < uVar3;
        uVar3 = uVar3 + 0x55555556;
        iVar10 = iVar10 + (UINT)bVar18;
    } while (iVar9 != 0xf);
    iVar10 = 0;
    iVar9 = 0;
    do {
        iVar13 = 6 - iVar9;
        pcVar2 = (char*)((int)local_9c + iVar9);
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + ((int)*pcVar2 & 0xffU) * 0x100 + (UINT)local_94[iVar13];
    } while (iVar9 != 7);
    local_1ec = 0;
    local_1e8 = 0;
    iVar10 = (UINT)local_94[0] + iVar10;
    iVar9 = 0;
    do {
        while (true) {
            iVar13 = iVar9 + 0xf;
            iVar4 = (int)(local_1e8 + 2 + (UINT)(0x7ffffffa < local_1ec)) >> 1;
            iVar14 = iVar13 + iVar4 * -0xb;
            iVar16 = iVar9 + (local_1e8 >> 1) * -0xc + iVar4;
            if (0xb < iVar14) {
                iVar14 = iVar14 + -0xc;
            }
            if (iVar4 != 1) {
                iVar16 = iVar16 + -0x18 + iVar4 * 0xc;
            }
            if (iVar9 != 0) break;
            iVar9 = 1;
            bVar18 = 0xd5555554 < local_1ec;
            local_1ec = local_1ec + 0x2aaaaaab;
            local_1e8 = local_1e8 + (UINT)bVar18;
            local_94[7] = ~*(byte*)((int)local_9c + iVar10 % iVar13 + 1) |
                *(byte*)((int)local_9c + iVar16) & *(byte*)((int)&local_158 + iVar14) |
                *(byte*)((int)local_9c + iVar10 % iVar13);
        }
        local_94[iVar9 + 7] =
            *(byte*)((int)local_9c + iVar16) & *(byte*)((int)&local_158 + iVar14) |
            *(byte*)((int)local_9c + iVar10 % iVar13) | ~*(byte*)((int)local_9c + iVar10 % iVar9);
        iVar9 = iVar9 + 1;
        bVar18 = 0xd5555554 < local_1ec;
        local_1ec = local_1ec + 0x2aaaaaab;
        local_1e8 = local_1e8 + (UINT)bVar18;
    } while (iVar9 != 0x71);
    iVar9 = 0;
    iVar10 = 0;
    do {
        pcVar2 = (char*)(param_1 + iVar10);
        pcVar1 = (char*)(param_1 + 1 + iVar10);
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + ((int)*pcVar2 << 8 | (int)*pcVar1);
    } while (iVar10 != 7);
    uVar3 = *(char*)(param_1 + 0xe) + iVar9;
    iVar9 = 0x1e;
    puVar6 = local_114;
    while (iVar9 != 0) {
        iVar9 = iVar9 + -1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
    }
    local_114[0] = 0x67452301;
    local_114[1] = 0xefcdab89;
    local_114[2] = 0x98badcfe;
    local_114[3] = 0x10325476;
    fixDeslocVal((int*)local_114, local_9c, 0x80);
    local_14c = local_104;
    uVar5 = local_104 >> 3 & 0x3f;
    local_148 = local_100;
    if (uVar5 < 0x38) {
        sVar11 = 0x38 - uVar5;
    }
    else {
        sVar11 = 0x78 - uVar5;
    }
    fixDeslocVal((int*)local_114, local_1b8, sVar11);
    fixDeslocVal((int*)local_114, &local_14c, 8);
    uVar15 = uVar3 & 3;
    local_168 = local_114[0];
    local_160 = local_114[2];
    local_15c = local_114[3];
    local_178[2] = local_114[2];
    iVar9 = 0;
    local_16c = local_114[3];
    puVar6 = &local_168;
    local_164 = local_114[1];
    local_178[0] = local_114[0];
    local_178[1] = local_114[1];
    uVar5 = local_178[uVar15];
    do {
        if ((byte)(*(char*)puVar6 - 0x30U) < 10) {
            *(char*)((int)param_2 + iVar9) = *(char*)puVar6;
            iVar9 = iVar9 + 1;
        }
        if (7 < iVar9) goto get_firstofparam2;
        puVar6 = (UINT*)((int)puVar6 + 1);
    } while (puVar6 != &local_158);
    bVar18 = false;
    do {
        iVar10 = iVar9 + 1;
        uVar7 = uVar5 / 10;
        if (uVar7 == 0) {
            *(char*)((int)param_2 + iVar9) = (char)uVar5 + '0';
            if (bVar18) break;
            bVar18 = true;
            uVar5 = local_178[3 - uVar15];
        }
        else {
            *(char*)((int)param_2 + iVar9) = (char)uVar5 + (char)uVar7 * -10 + '0';
            uVar5 = uVar7;
        }
        if ((uVar5 == 0) || (iVar9 = iVar10, 7 < iVar10)) break;
    } while (true);
    if (iVar10 < 8) {
        iVar9 = 1;
        do {
            while (iVar10 == 8) {
                cVar8 = *(char*)param_2;
                if (cVar8 != '\0') goto offshored;
                iVar13 = iVar9 + 3;
                iVar9 = iVar9 + 1;
                *param_2 = local_1b8[iVar13] + 'j';//*(char*)param_2 = (&stack0xfffffe94)[iVar13] + 'j';
                if (iVar9 == 0x11) goto get_firstofparam2;
            }
            iVar13 = iVar9 + 3;
            iVar9 = iVar9 + 1;
            param_2[iVar10] = local_1b8[iVar13] + 'j';//*(char*)((int)param_2 + iVar10) = (&stack0xfffffe94)[iVar13] + 'j';
            iVar10 = iVar10 + 1;
        } while (iVar9 != 0x11);
    }
get_firstofparam2:
    cVar8 = *(char*)param_2;
offshored:
    if (cVar8 == '0') {
        *(byte*)param_2 = (*(byte*)((int)&local_168 + (UINT)(uVar3 != 0)) & 7) + 0x31;
    }
    param_2[0];//*(UINT*)(param_2 + 2) = 0; já expliquei volte lá em cima e veja denovo porque não sou papagaio !
    return;
}

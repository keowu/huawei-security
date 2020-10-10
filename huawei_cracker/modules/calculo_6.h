#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....
#include "calculo_3.h"

void __cdecl calculo6_pt2(UINT* param_1)
{
    UINT uVar1;
    UINT uVar2;
    UINT uVar3;
    UINT uVar4;
    UINT uVar5;
    UINT uVar6;
    byte* pbVar7;
    byte* pbVar8;
    UINT uVar9;
    UINT* puVar10;
    int iVar11;
    UINT* puVar12;
    UINT local_194;
    UINT local_190;
    UINT local_18c;
    UINT local_188;
    UINT local_184;
    UINT local_17c[91];

    pbVar7 = (byte*)((int)param_1 + 0x1f);
    puVar10 = local_17c;
    do {
        pbVar8 = pbVar7 + 4;
        *puVar10 = (UINT)pbVar7[-2] << 0x10 | (UINT)pbVar7[-3] << 0x18 | (UINT)*pbVar7 |
            (UINT)pbVar7[-1] << 8;
        pbVar7 = pbVar8;
        puVar10 = puVar10 + 1;
    } while (pbVar8 != (byte*)((int)param_1 + 0x5f));
    puVar10 = local_17c + 0xd;
    do {
        puVar12 = puVar10 + 1;
        uVar9 = puVar10[-0xd];
        uVar1 = CONCATENE2BYTESEM1(*puVar10 ^ puVar10[-5] ^ puVar10[-0xb] ^ uVar9, 0x1f);
        puVar10[3] = uVar1;
        puVar10 = puVar12;
    } while (puVar12 != local_17c + 0x4d);
    uVar4 = *param_1;
    iVar11 = 0;
    uVar6 = param_1[1];
    local_194 = param_1[3];
    uVar3 = param_1[2];
    local_184 = param_1[4];
    do {
        local_190 = uVar3;
        uVar5 = uVar1;
        if (iVar11 == 0) {
            uVar9 = uVar4;
            uVar5 = local_194;
        }
        uVar4 = uVar9;
        uVar9 = local_17c[iVar11];
        iVar11 = iVar11 + 1;
        uVar2 = CONCATENE2BYTESEM1(uVar4, 0x1b);
        uVar3 = CONCATENE2BYTESEM1(uVar6, 2);
        uVar2 = local_184 + 0x5a827999 + uVar2;
        uVar9 = uVar9 + (~uVar6 & uVar5 | local_190 & uVar6) + uVar2;
        uVar6 = uVar4;
        uVar1 = local_190;
        local_194 = uVar5;
        local_184 = uVar5;
    } while (iVar11 != 0x14);
    iVar11 = 0;
    local_18c = local_190;
    local_188 = uVar4;
    do {
        uVar6 = local_17c[iVar11 + 0x14];
        if (iVar11 == 0) {
            uVar4 = uVar3;
            uVar2 = local_18c;
            uVar1 = uVar9;
        }
        uVar9 = uVar1;
        local_18c = uVar2;
        uVar3 = uVar4;
        iVar11 = iVar11 + 1;
        uVar1 = CONCATENE2BYTESEM1(uVar9, 0x1b);
        uVar1 = uVar6 + 0x6ed9eba1 + uVar1 + (local_18c ^ uVar3 ^ local_188) + local_194;
        uVar4 = CONCATENE2BYTESEM1(local_188, 2);
        uVar2 = uVar3;
        local_194 = local_18c;
        local_188 = uVar9;
    } while (iVar11 != 0x14);
    iVar11 = 0;
    uVar6 = uVar3;
    uVar5 = uVar1;
    local_190 = uVar9;
    do {
        uVar9 = uVar4;
        if (iVar11 != 0) {
            uVar3 = uVar6;
        }
        uVar6 = local_17c[iVar11 + 0x28];
        if (iVar11 != 0) {
            uVar1 = uVar5;
        }
        uVar2 = uVar3 & uVar9;
        iVar11 = iVar11 + 1;
        uVar5 = CONCATENE2BYTESEM1(uVar1, 0x1b);
        uVar4 = CONCATENE2BYTESEM1(local_190, 2);
        uVar5 = ((uVar3 | uVar9) & local_190 | uVar2) + uVar6 + 0x8f1bbcdc + uVar5 + local_18c;
        uVar6 = uVar9;
        local_190 = uVar1;
        local_18c = uVar3;
    } while (iVar11 != 0x14);
    iVar11 = 0;
    uVar6 = uVar5;
    local_194 = uVar1;
    local_190 = uVar9;
    do {
        if (iVar11 == 0) {
            uVar2 = uVar4;
        }
        uVar4 = uVar2;
        uVar1 = local_17c[iVar11 + 0x3c];
        if (iVar11 != 0) {
            uVar5 = local_190;
            uVar9 = uVar6;
        }
        iVar11 = iVar11 + 1;
        uVar6 = CONCATENE2BYTESEM1(uVar5, 0x1b);
        local_190 = (uVar9 ^ uVar4 ^ local_194) + uVar1 + 0xca62c1d6 + uVar6 + local_18c;
        uVar2 = CONCATENE2BYTESEM1(local_194, 2);
        uVar6 = uVar4;
        local_194 = uVar5;
        local_18c = uVar9;
    } while (iVar11 != 0x14);
    *param_1 = *param_1 + local_190;
    param_1[1] = param_1[1] + uVar5;
    param_1[2] = param_1[2] + uVar2;
    param_1[3] = param_1[3] + uVar4;
    param_1[4] = param_1[4] + uVar9;
    param_1[0x17] = 0;
    return;
}


void __cdecl calculo_6(int IMEI, char* SECURITY_CODE, int SIZE)
{
    UINT uVar1;
    int iVar2;
    int iVar3;
    UINT* puVar4;
    char local_a2[30];
    UINT local_84[4];
    UINT local_74;
    int local_70;
    int local_6c;
    UINT auStack104[56];
    UINT local_30;
    UINT local_2f;
    UINT local_2e;
    UINT local_2d;
    UINT local_2c;
    UINT local_2b;
    UINT local_2a;
    UINT local_29;
    UINT local_28;
    int local_24;
    int local_20;

    iVar2 = 0x1a;
    local_28 = 0;
    iVar3 = 0;
    puVar4 = local_84;
    while (iVar2 != 0) {
        iVar2 = iVar2 + -1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    local_84[0] = 0x67452301;
    local_84[1] = 0xefcdab89;
    local_84[2] = 0x98badcfe;
    local_84[3] = 0x10325476;
    local_74 = 0xc3d2e1f0;
    do {
        auStack104[local_28] = *(UINT*)(IMEI + iVar3);
        local_28 = local_28 + 1;
        local_70 = local_70 + 8;
        iVar2 = local_6c;
        if ((local_70 == 0) && (iVar2 = local_6c + 1, iVar2 == 0)) {
            local_20 = local_6c + 2;
        }
        local_6c = iVar2;
        if (local_28 == 0x40) {
            calculo6_pt2(local_84);
        }
        if (local_20 != 0) {
            printf("\nERRO - NÃO COMPUTEI O CÓDIGO DO DIGEST !!"); //CASO TENHA UM ERRO NA COMPUTAÇÃO DO DIGITO DIGEST DEBUG
            return;
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 != 0xf);
    if (local_24 == 0) {
        auStack104[local_28] = 0x80;
        local_28 = local_28 + 1;
        if (local_28 < 0x38) {
            do {
                auStack104[local_28] = 0;
                local_28 = local_28 + 1;
            } while (local_28 != 0x38);
        }
        local_30 = (UINT)((UINT)local_6c >> 0x18);
        local_2f = (UINT)((UINT)local_6c >> 0x10);
        local_2d = (UINT)local_6c;
        local_2e = (UINT)((UINT)local_6c >> 8);
        local_2c = (UINT)((UINT)local_70 >> 0x18);
        local_2b = (UINT)((UINT)local_70 >> 0x10);
        local_2a = (UINT)((UINT)local_70 >> 8);
        local_29 = (UINT)local_70;
        calculo6_pt2(local_84);
        local_24 = 1;
    }
    uVar1 = local_84[1];
    if (((SIZE == 5) || (uVar1 = local_84[2], SIZE == 6)) || (uVar1 = local_84[0], SIZE == 2)) {
        sprintf(local_a2, "%u", uVar1); //DEBUG
        uVar1 = strlen(local_a2);
    }
    else {
        uVar1 = strlen(local_a2);
    }
    if (7 < uVar1) {
        strncpy(SECURITY_CODE, local_a2, 8);
        SECURITY_CODE[8] = '\0';//DEBUG
        return;
    }
    memcpy(SECURITY_CODE, local_a2, uVar1 + 1);
    if (SIZE == 5) {
        sprintf(local_a2, "%u", local_74);//DEBUG
    }
    else {
        if (SIZE == 6) {
            sprintf(local_a2, "%u", local_84[3]);//DEBUG
        }
        else {
            if (SIZE == 2) {
                sprintf(local_a2, "%u", local_84[1]);//DEBUG
            }
        }
    }
    strcat(SECURITY_CODE, local_a2);
    SECURITY_CODE[8] = '\0';
    return;
}
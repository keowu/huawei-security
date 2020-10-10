#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....

UINT __cdecl CONCATENE2BYTESEM1(UINT param_1, UINT param_2)
{
    return param_1 >> ((byte)param_2 & 0x1f) & 0x7fffffff | param_1 << (0x20 - (byte)param_2 & 0x1f);
}


UINT _fastcall CONCATENE3BYTESEM1(UINT BYTE, UINT BYTE2, UINT BYTE3) {
    return (BYTE3 << 16) | (BYTE  << 8) | BYTE2;
}


void __cdecl calculo_3(char* IMEI, unsigned int* SECURITY_CODE, int size)
{
    int iVar1;
    UINT uVar2;
    UINT uVar3;
    UINT uVar4;
    UINT uVar5;
    UINT uVar6;
    UINT* puVar7;
    int iVar8;
    UINT* puVar9;
    byte* pbVar10;
    int* piVar11;
    UINT* puVar12;
    UINT local_298;
    UINT local_294;
    int local_290;
    UINT local_288;
    UINT local_284;
    UINT local_280;
    byte local_27a[106];
    int local_210[3];
    int local_204;
    int local_200;
    int local_1fc;
    int local_1f8;
    int local_1f4;
    int local_1f0;
    int local_1ec;
    int local_1e8;
    int local_1e4;
    int local_1e0;
    int local_1dc;
    UINT local_1d8;
    int local_1d4;

    iVar8 = 0x7d;
    *SECURITY_CODE = 0; //*(undefined*)SECURITY_CODE = 0; the [0] position of array
    piVar11 = local_210;
    while (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
    }
    strcpy((char*)local_210, IMEI);
    local_204 = CONCATENE3BYTESEM1(0x80, (UINT)local_204, 0x00);
    local_1d8 = CONCATENE3BYTESEM1(local_1d8, 0x78, 0x00);
    uVar2 = CONCATENE2BYTESEM1(local_210[0] + 0xd76aa477, 0x19);
    uVar5 = uVar2 + 0xefcdab89;
    uVar3 = CONCATENE2BYTESEM1(local_210[1] + -0x705f434 + (uVar5 & 0x77777777 ^ 0x98badcfe), 0x14);
    uVar3 = uVar5 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(local_210[2] + -0x4324b227 + ((uVar5 ^ 0xefcdab89) & uVar3 ^ 0xefcdab89), 0xf)
        ;
    iVar8 = local_204;
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(local_204 + -0x4e748589 + ((uVar3 ^ uVar5) & uVar4 ^ uVar5), 10);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((uVar4 ^ uVar3) & uVar5 ^ uVar3) + uVar2 + 0xe549bb38 + local_200, 0x19);
    uVar2 = uVar5 + uVar2;
    uVar3 = CONCATENE2BYTESEM1(((uVar5 ^ uVar4) & uVar2 ^ uVar4) + uVar3 + 0x4787c62a + local_1fc, 0x14);
    uVar3 = uVar2 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(((uVar2 ^ uVar5) & uVar3 ^ uVar5) + uVar4 + 0xa8304613 + local_1f8, 0xf);
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(((uVar3 ^ uVar2) & uVar4 ^ uVar2) + uVar5 + 0xfd469501 + local_1f4, 10);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((uVar4 ^ uVar3) & uVar5 ^ uVar3) + uVar2 + 0x698098d8 + local_1f0, 0x19);
    uVar2 = uVar5 + uVar2;
    uVar3 = CONCATENE2BYTESEM1(((uVar5 ^ uVar4) & uVar2 ^ uVar4) + uVar3 + 0x8b44f7af + local_1ec, 0x14);
    uVar3 = uVar2 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(((uVar2 ^ uVar5) & uVar3 ^ uVar5) + (uVar4 - 0xa44f) + local_1e8, 0xf);
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(((uVar3 ^ uVar2) & uVar4 ^ uVar2) + uVar5 + 0x895cd7be + local_1e4, 10);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((uVar4 ^ uVar3) & uVar5 ^ uVar3) + uVar2 + 0x6b901122 + local_1e0, 0x19);
    uVar2 = uVar5 + uVar2;
    uVar3 = CONCATENE2BYTESEM1(((uVar5 ^ uVar4) & uVar2 ^ uVar4) + uVar3 + 0xfd987193 + local_1dc, 0x14);
    iVar1 = local_1d8;
    uVar3 = uVar2 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(((uVar2 ^ uVar5) & uVar3 ^ uVar5) + uVar4 + 0xa679438e + local_1d8, 0xf);
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(((uVar3 ^ uVar2) & uVar4 ^ uVar2) + uVar5 + 0x49b40821 + local_1d4, 10);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((uVar5 ^ uVar4) & uVar3 ^ uVar4) + local_210[1] + -0x9e1da9e + uVar2, 0x1b);
    uVar2 = uVar5 + uVar2;
    uVar3 = CONCATENE2BYTESEM1(((uVar2 ^ uVar5) & uVar4 ^ uVar5) + local_1f8 + -0x3fbf4cc0 + uVar3, 0x17);
    uVar3 = uVar2 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(((uVar3 ^ uVar2) & uVar5 ^ uVar2) + local_1e4 + 0x265e5a51 + uVar4, 0x12);
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(((uVar4 ^ uVar3) & uVar2 ^ uVar3) + local_210[0] + -0x16493856 + uVar5, 0xc);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((uVar5 ^ uVar4) & uVar3 ^ uVar4) + local_1fc + -0x29d0efa3 + uVar2, 0x1b);
    uVar2 = uVar5 + uVar2;
    uVar3 = CONCATENE2BYTESEM1(((uVar2 ^ uVar5) & uVar4 ^ uVar5) + local_1e8 + 0x2441453 + uVar3, 0x17);
    uVar3 = uVar2 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(((uVar3 ^ uVar2) & uVar5 ^ uVar2) + local_1d4 + -0x275e197f + uVar4, 0x12);
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(((uVar4 ^ uVar3) & uVar2 ^ uVar3) + local_200 + -0x182c0438 + uVar5, 0xc);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((uVar5 ^ uVar4) & uVar3 ^ uVar4) + local_1ec + 0x21e1cde6 + uVar2, 0x1b);
    uVar2 = uVar5 + uVar2;
    uVar3 = CONCATENE2BYTESEM1(((uVar2 ^ uVar5) & uVar4 ^ uVar5) + iVar1 + -0x3cc8f82a + uVar3, 0x17);
    uVar3 = uVar2 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(((uVar3 ^ uVar2) & uVar5 ^ uVar2) + iVar8 + -0xb2af279 + uVar4, 0x12);
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(((uVar4 ^ uVar3) & uVar2 ^ uVar3) + local_1f0 + 0x455a14ed + uVar5, 0xc);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((uVar5 ^ uVar4) & uVar3 ^ uVar4) + local_1dc + -0x561c16fb + uVar2, 0x1b);
    uVar2 = uVar5 + uVar2;
    uVar3 = CONCATENE2BYTESEM1(((uVar2 ^ uVar5) & uVar4 ^ uVar5) + local_210[2] + -0x3105c08 + uVar3, 0x17);
    uVar3 = uVar2 + uVar3;
    uVar4 = CONCATENE2BYTESEM1(((uVar3 ^ uVar2) & uVar5 ^ uVar2) + local_1f4 + 0x676f02d9 + uVar4, 0x12);
    uVar4 = uVar3 + uVar4;
    uVar5 = CONCATENE2BYTESEM1(((uVar4 ^ uVar3) & uVar2 ^ uVar3) + local_1e0 + -0x72d5b376 + uVar5, 0xc);
    uVar5 = uVar4 + uVar5;
    uVar2 = CONCATENE2BYTESEM1((uVar4 ^ uVar3 ^ uVar5) + local_1fc + -0x5c6be + uVar2, 0x1c);
    uVar2 = uVar5 + uVar2;
    uVar6 = CONCATENE2BYTESEM1((uVar5 ^ uVar4 ^ uVar2) + local_1f0 + -0x788e097f + uVar3, 0x15);
    uVar6 = uVar2 + uVar6;
    uVar3 = CONCATENE2BYTESEM1((uVar2 ^ uVar5 ^ uVar6) + local_1e4 + 0x6d9d6122 + uVar4, 0x10);
    uVar3 = uVar6 + uVar3;
    uVar5 = CONCATENE2BYTESEM1((uVar6 ^ uVar2 ^ uVar3) + iVar1 + -0x21ac7f4 + uVar5, 9);
    uVar5 = uVar3 + uVar5;
    uVar2 = CONCATENE2BYTESEM1((uVar3 ^ uVar6 ^ uVar5) + local_210[1] + -0x5b4115bc + uVar2, 0x1c);
    uVar2 = uVar5 + uVar2;
    uVar4 = CONCATENE2BYTESEM1((uVar5 ^ uVar3 ^ uVar2) + local_200 + 0x4bdecfa9 + uVar6, 0x15);
    uVar4 = uVar2 + uVar4;
    uVar3 = CONCATENE2BYTESEM1((uVar2 ^ uVar5 ^ uVar4) + local_1f4 + -0x944b4a0 + uVar3, 0x10);
    uVar3 = uVar4 + uVar3;
    uVar5 = CONCATENE2BYTESEM1((uVar4 ^ uVar2 ^ uVar3) + local_1e8 + -0x41404390 + uVar5, 9);
    uVar5 = uVar3 + uVar5;
    uVar2 = CONCATENE2BYTESEM1((uVar3 ^ uVar4 ^ uVar5) + local_1dc + 0x289b7ec6 + uVar2, 0x1c);
    uVar2 = uVar5 + uVar2;
    uVar4 = CONCATENE2BYTESEM1((uVar5 ^ uVar3 ^ uVar2) + local_210[0] + -0x155ed806 + uVar4, 0x15);
    uVar4 = uVar2 + uVar4;
    uVar3 = CONCATENE2BYTESEM1((uVar2 ^ uVar5 ^ uVar4) + iVar8 + -0x2b10cf7b + uVar3, 0x10);
    uVar3 = uVar4 + uVar3;
    uVar5 = CONCATENE2BYTESEM1((uVar4 ^ uVar2 ^ uVar3) + local_1f8 + 0x4881d05 + uVar5, 9);
    uVar5 = uVar3 + uVar5;
    uVar2 = CONCATENE2BYTESEM1((uVar3 ^ uVar4 ^ uVar5) + local_1ec + -0x262b2fc7 + uVar2, 0x1c);
    uVar2 = uVar5 + uVar2;
    uVar4 = CONCATENE2BYTESEM1((uVar5 ^ uVar3 ^ uVar2) + local_1e0 + -0x1924661b + uVar4, 0x15);
    uVar4 = uVar2 + uVar4;
    uVar3 = CONCATENE2BYTESEM1((uVar2 ^ uVar5 ^ uVar4) + local_1d4 + 0x1fa27cf8 + uVar3, 0x10);
    uVar3 = uVar4 + uVar3;
    uVar5 = CONCATENE2BYTESEM1((uVar4 ^ uVar2 ^ uVar3) + local_210[2] + -0x3b53a99b + uVar5, 9);
    uVar5 = uVar3 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((~uVar4 | uVar5) ^ uVar3) + local_210[0] + -0xbd6ddbc + uVar2, 0x1a);
    uVar2 = uVar5 + uVar2;
    uVar4 = CONCATENE2BYTESEM1(((~uVar3 | uVar2) ^ uVar5) + local_1f4 + 0x432aff97 + uVar4, 0x16);
    uVar4 = uVar2 + uVar4;
    uVar3 = CONCATENE2BYTESEM1(((~uVar5 | uVar4) ^ uVar2) + iVar1 + -0x546bdc59 + uVar3, 0x11);
    uVar3 = uVar4 + uVar3;
    uVar5 = CONCATENE2BYTESEM1(((~uVar2 | uVar3) ^ uVar4) + local_1fc + -0x36c5fc7 + uVar5, 0xb);
    uVar5 = uVar3 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((~uVar4 | uVar5) ^ uVar3) + local_1e0 + 0x655b59c3 + uVar2, 0x1a);
    uVar2 = uVar5 + uVar2;
    uVar4 = CONCATENE2BYTESEM1(((~uVar3 | uVar2) ^ uVar5) + iVar8 + -0x70f3336e + uVar4, 0x16);
    uVar4 = uVar2 + uVar4;
    uVar3 = CONCATENE2BYTESEM1(((~uVar5 | uVar4) ^ uVar2) + local_1e8 + -0x100b83 + uVar3, 0x11);
    uVar3 = uVar4 + uVar3;
    uVar5 = CONCATENE2BYTESEM1(((~uVar2 | uVar3) ^ uVar4) + local_210[1] + -0x7a7ba22f + uVar5, 0xb);
    uVar5 = uVar3 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((~uVar4 | uVar5) ^ uVar3) + local_1f0 + 0x6fa87e4f + uVar2, 0x1a);
    uVar2 = uVar5 + uVar2;
    uVar4 = CONCATENE2BYTESEM1(((~uVar3 | uVar2) ^ uVar5) + local_1d4 + -0x1d31920 + uVar4, 0x16);
    uVar4 = uVar2 + uVar4;
    uVar3 = CONCATENE2BYTESEM1(((~uVar5 | uVar4) ^ uVar2) + local_1f8 + -0x5cfebcec + uVar3, 0x11);
    uVar3 = uVar4 + uVar3;
    uVar5 = CONCATENE2BYTESEM1(((~uVar2 | uVar3) ^ uVar4) + local_1dc + 0x4e0811a1 + uVar5, 0xb);
    uVar5 = uVar3 + uVar5;
    uVar2 = CONCATENE2BYTESEM1(((~uVar4 | uVar5) ^ uVar3) + local_200 + -0x8ac817e + uVar2, 0x1a);
    uVar2 = uVar5 + uVar2;
    uVar4 = CONCATENE2BYTESEM1(((~uVar3 | uVar2) ^ uVar5) + local_1e4 + -0x42c50dcb + uVar4, 0x16);
    uVar4 = uVar2 + uVar4;
    uVar3 = CONCATENE2BYTESEM1(((~uVar5 | uVar4) ^ uVar2) + local_210[2] + 0x2ad7d2bb + uVar3, 0x11);
    uVar3 = uVar4 + uVar3;
    uVar5 = CONCATENE2BYTESEM1(((~uVar2 | uVar3) ^ uVar4) + local_1ec + -0x14792c6f + uVar5, 0xb);
    iVar8 = 0x1b;
    puVar9 = &local_288;
    local_298 = uVar2 + 0x67452301;
    local_294 = uVar3 + 0xefcdab89 + uVar5;
    local_290 = uVar3 + 0x98badcfe;
    puVar12 = puVar9;
    while (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
    }
    puVar12 = 0;//*(undefined2*)puVar12 = 0; FIX
    puVar7 = &local_298;
    if (size == 0xc9) {
        puVar7 = (UINT*)(&local_294 + 1);
    }
    uVar5 = *puVar7;
    local_284 = puVar7[1];
    uVar3 = (uVar5 & 0xff) + (int)((long long)((unsigned long long)(uVar5 & 0xff) * 0xcccccccd) >> 0x23) * -10;
    if (uVar3 == 0) {
        pbVar10 = (byte*)((int)&local_280 + 1);
        uVar3 = 0;
        while (uVar3 = uVar3 + (int)((long long)((unsigned long long)uVar3 * 0xcccccccd) >> 0x23) * -10,
            uVar3 == 0) {
            if (pbVar10 == local_27a) {
                local_288 = CONCATENE3BYTESEM1((INT32)(uVar5 >> 8), 5, 0x00);
                uVar3 = 5;
                goto exit;
            }
            uVar3 = (UINT)*pbVar10;
            pbVar10 = pbVar10 + 1;
        }
    }
    local_288 = uVar5 & 0xffffff00 | uVar3 & 0xff;
exit:
    while (true) {
        uVar3 = uVar3 & 0xff;
        if (9 < (uVar3 - 0x30 & 0xff)) {
            *(char*)puVar9 =
                (char)uVar3 + (char)(int)((long long)((unsigned long long)uVar3 * 0xcccccccd) >> 0x23) * -10 + '0';
        }
        puVar9 = (UINT32*)((int)puVar9 + 1);
        if (puVar9 == &local_280) break;
        uVar3 = (UINT) * (byte*)puVar9;
    }
    *SECURITY_CODE = local_288;
    SECURITY_CODE[1] = local_284;
    SECURITY_CODE[2] = 0;//*(undefined*)(SECURITY_CODE + 2) = 0; FIXED
    return;
}
#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....

void __cdecl calculo_0(char* param_1, unsigned int* param_2, int param_3)

{
    size_t sVar1;
    unsigned int uVar2;
    int iVar3;
    unsigned int* puVar4;
    unsigned int* puVar5;
    int* piVar6;
    unsigned int uVar7;
    unsigned int local_4bc[8];
    unsigned int local_49c;
    unsigned int local_498;
    unsigned int local_494;
    unsigned int local_490;
    unsigned int local_48c;
    unsigned int local_488;
    unsigned int local_484;
    unsigned int local_480;
    unsigned int local_47c;
    unsigned int local_478;
    unsigned int local_474;
    unsigned int local_470;
    unsigned int local_46c;
    unsigned int local_468;
    unsigned int local_464;
    unsigned int local_460;
    unsigned int local_45c;
    unsigned int local_458;
    unsigned int local_454;
    unsigned int local_450;
    unsigned int local_44c;
    unsigned int local_448;
    unsigned int local_444;
    unsigned int local_440;
    unsigned int local_43c;
    unsigned int local_438;
    unsigned int local_434;
    unsigned int local_430;
    unsigned int local_42c;
    unsigned int local_428;
    unsigned int local_424;
    unsigned int local_420;
    unsigned int auStack1052[128];
    int local_21c[131];

    iVar3 = 0x80;
    local_49c = 0x6e9c2a;
    local_498 = 0x3ca2b3c;
    local_494 = 0x1080dc;
    local_490 = 0x30855ee;
    local_48c = 0x3d3283a;
    local_488 = 0x2f4f85a;
    local_484 = 0x1f8808e;
    local_480 = 0x3147d10;
    local_47c = 0x34bbbb5;
    local_478 = 0x29eeadd;
    local_474 = 0x2318616;
    local_470 = 0x50f3adc;
    local_46c = 0xEDB8832;//&DAT_00d11f38; // FIX
    local_468 = 0x2123bd2;
    local_464 = 0x4276c86;
    local_460 = 0x355caad;
    local_45c = 0x1966a9;
    local_458 = 0x21058f;
    local_454 = 0x2aeda9;
    local_450 = 0x37ce91;
    local_44c = 0xC40C7;//&LAB_00488c9f; //FIX from 28D160 -> 488C9F + 0xB0B0 = C40C7               //PONTER 60
    local_448 = 0xDECCD8C5;//&DAT_005e507d; //FIX from 28D164 -> 5E507D + 0XAC32 = DECCD8C5         /POINTER 64
    local_444 = 0x7a9be5;
    local_440 = 0x9f644b;
    local_43c = 0xCC000001;//○&DAT_00cf35a1; //FIX from 28D170 -> CF35A1 + 0x5599 = CC000001 //POINTER 70
    local_438 = 0x10d5f55;
    local_434 = 0x15e2f25;
    local_430 = 0x1c73d6b;
    local_42c = 0x24fcfdd;
    local_428 = 0x3015b47;
    puVar4 = &local_45c;
    if (param_3 == 0xc9) {
        puVar4 = &local_49c;
    }
    local_424 = 0x3e829e9;
    local_420 = 0x5143685;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;//*(undefined*)(param_2 + 2) = 0; //FIX
    piVar6 = local_21c;
    while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
    }
    uVar7 = 0;
    while (sVar1 = strlen(param_1), uVar7 < sVar1) {
        local_21c[uVar7] = (int)param_1[uVar7];
        uVar7 = uVar7 + 1;
    }
    uVar7 = 0;
    do {
        auStack1052[uVar7] = puVar4[uVar7];
        uVar7 = uVar7 + 1;
    } while (uVar7 != 0x10);
    do {
        auStack1052[uVar7] = uVar7;
        uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80);
    uVar7 = 0;
    iVar3 = 0;
    do {
        puVar4 = auStack1052 + iVar3;
        piVar6 = local_21c + iVar3;
        iVar3 = iVar3 + 1;
        uVar7 = uVar7 + *puVar4 * *piVar6;
    } while (iVar3 != 0xf);
    local_4bc[6] = (uVar7 & 0xf000000) >> 0x18;
    uVar2 = uVar7 & 0xf;
    local_4bc[1] = (uVar7 & 0xf0) >> 4;
    local_4bc[2] = (uVar7 & 0xf00) >> 8;
    local_4bc[3] = (uVar7 & 0xf000) >> 0xc;
    local_4bc[4] = (uVar7 & 0xf0000) >> 0x10;
    local_4bc[5] = (uVar7 & 0xf00000) >> 0x14;
    local_4bc[7] = uVar7 >> 0x1c;
    puVar4 = local_4bc;
    local_4bc[0] = uVar2;
    while (true) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar2 % 10;
        if (puVar5 == &local_49c) break;
        uVar2 = *puVar5;
        puVar4 = puVar5;
    }
    if (local_4bc[0] == 0) {
        local_4bc[0] = 1;
    }
    iVar3 = 0;
    while (true) {
        *(char*)((int)param_2 + iVar3) = (char)local_4bc[0] + '0';
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) break;
        local_4bc[0] = local_4bc[iVar3];
    }
    return;
}
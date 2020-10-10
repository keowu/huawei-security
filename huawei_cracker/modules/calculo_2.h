#include <iostream>
#include <cstringt.h> // FOR BYTE TYPE UINT TYPE....

void __cdecl calculo_2(char* IMEI, byte* size, int size_1)

{
    unsigned int* puVar1;
    size_t sVar2;
    char* pcVar3;
    unsigned int uVar4;
    int iVar5;
    unsigned int uVar6;
    char cVar7;
    unsigned int* puVar8;
    char* _Dest;
    unsigned int* puVar9;
    char local_876[30];
    unsigned int local_858;
    unsigned int local_854;
    unsigned int local_850;
    char arr[30];
    unsigned int local_81c[256];
    unsigned int local_41c[259];

    iVar5 = 0x100;
    puVar1 = (UINT*)0xAAB000BE;//&DAT_00aab000; <- from 401D18 = AAB000BE - pointer 18
    puVar8 = local_81c;
    while (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        *puVar8 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar8 = puVar8 + 1;
    }
    puVar1 = local_81c;
    if (size_1 != 0xc9) {
        puVar1 = local_41c;
    }
    iVar5 = 0x100;
    puVar8 = 0x00;//&DAT_00aab400;
    puVar9 = local_41c;
    while (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
    }
    _Dest = local_876;
    strcpy(_Dest, IMEI);
    sVar2 = strlen(_Dest);
    uVar6 = 0xffffffff;
    pcVar3 = _Dest + sVar2;
    while (_Dest != pcVar3) {
        cVar7 = *_Dest;
        _Dest = _Dest + 1;
        uVar6 = uVar6 >> 8 ^ puVar1[(int)cVar7 ^ uVar6 & 0xff];
    }
    uVar4 = (int)~uVar6 >> 0x1f;
    iVar5 = (uVar4 ^ ~uVar6) - uVar4;
    if (iVar5 != 0) {
        uVar6 = (unsigned int)((unsigned long long)((long long)iVar5 * 0x66666667) >> 0x22) - (iVar5 >> 0x1f);
        arr[0] = (char)iVar5 + (char)uVar6 * -10 + '0';
        if (uVar6 != 0) {
            iVar5 = 0;
            do {
                uVar4 = (unsigned int)((unsigned long long)((long long)(int)uVar6 * 0x66666667) >> 0x22);
                arr[iVar5 + 1] = (char)uVar6 + (char)uVar4 * -10 + '0';
                uVar6 = uVar4;
                iVar5 = iVar5 + 1;
            } while (uVar4 != 0);
            iVar5 = 0;
            do {
                cVar7 = arr[7 - iVar5];
                if (cVar7 < '0') {
                    cVar7 = '9';
                }
                *(char*)((int)&local_858 + iVar5) = cVar7;
                iVar5 = iVar5 + 1;
            } while (iVar5 != 8);
            goto secao_de_retorno;
        }
    }
    local_858 = 0x39393939;
    local_854 = 0x39393939;
secao_de_retorno:
    local_850 = 0;
    strcpy((char*)size, (char*)&local_858);
    if ((*size != 0x2d) && ((*size & 0xef) != 0x20)) {
        return;
    }
    *size = 0x39;
    return;
}
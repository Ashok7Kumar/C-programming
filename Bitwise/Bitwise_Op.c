/**
 * file: Bitwise_Op.c
 * description: Various Bit wise operarions.
 */


#include <stdio.h>

// Data type
typedef unsigned int UINT32;
typedef unsigned char UINT8;
UINT32 setBit(UINT32 number,UINT8 bitop)
{

    return (number |(1U<<bitop));
}

int main(void)
{

    UINT32 num =0xfe04;
    UINT8 bit=0;
    printf("Set Bit %u in num:0x%08x isand result is:0x%08x\n",bit,num,setBit(num,bit));
    return 0;



}
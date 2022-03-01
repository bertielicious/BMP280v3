#include "config.h"

uint8_t  bcdToDecimal(uint8_t byte)
{
    return((byte>>4)*10 + (byte & 0x0f));
    /*uint8_t i = 0;
    uint8_t decByte = 0;
    uint8_t quotient = 0;
    uint8_t remainder = 0;
    uint8_t arr[8] = {0,0,0,0,0,0,0,0};
    quotient = byte;
    while(quotient > 0)
    {
        remainder = quotient%2;
        quotient = quotient>>1;
        arr[i] = remainder;
        decByte = decByte |remainder <<i;
        i++;
    }  
    return decByte;*/
}

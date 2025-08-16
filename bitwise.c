// Set bit positions [10:5] in a given data to 0x3E
// Data = 0x4f63;
#include <stdio.h>
#include <stdlib.h>

int main(void){
    __uint16_t data = 0x4f63;
    __uint16_t output;
    printf("%b\n",data);
    data&=~(0x3f<<5); // it clears the exact bit from 5 to 10
    data|=(0x3e<<5);
    printf("%b\n",data);

    return 0;
}

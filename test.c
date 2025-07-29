#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a = 42;
    int b = 42&1; // this will produce 0 as the lsb bit of the even number is zero and and with the 1 will result
    // in zero.
    __uint8_t c = 32;
    printf("%d\n",c|(1<<4));//this set the 4th bit to 1 
    printf("%d\n",c|(1<<7));//this set the 7th bit to 1
    printf("%b\n",c|(1<<4));
    


    printf("%d%d\n",a,b);



    return 0;
}

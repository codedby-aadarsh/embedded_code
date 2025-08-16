#include <stdio.h>
#include <stdlib.h>

int main(void){
    // __uint8_t a=0;
    // while(a<11){
    //     printf("%d\n",a++);
    // }

    // counts the number of evens form 0 to 100 and keep track eveen numberes
    __uint8_t a = 0,even=0;
    while(a<100){
        (a%2==0)?(printf("number=%d,no.ofevens=%d\n",a,even++)):NULL;
        a++;
    }    


    return 0;
}

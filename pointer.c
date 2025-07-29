#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void){
    char a = 100;
    printf("%p\n",&a);
    char* p =  &a; //write operation 
    char value = *p; // derefernicing a pointer, it gives the value stored at memory location!! 
    printf("%c\n",value);
    *p = 65; //write operation on the pointer 
    printf("%c\n",a);

    return 0;
}

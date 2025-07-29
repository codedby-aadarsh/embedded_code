#include <stdlib.h>
#include <stdio.h>

int main(void){

    char arr[5];
    
    for(int i=0;i<5;i++){
        printf("enter the char:");
        scanf("%c\n",&arr[i]);
    }
    int c=0;
    while(c<5){
        printf("%d\n",arr[c]);
        c++;
    }



    return 0;
}
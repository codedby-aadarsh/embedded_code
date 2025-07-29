#include <stdio.h>
#include <stdlib.h>
#include "math.h"
// int add(int a, int b); // you have to declare your function before main to be able to call
// int sub(int a, int b);
// int divi(int a, int b);
// int mul(int a, int b);

int main(void){
    int a ,b ;
    printf("enter two numbere :");
    scanf("%d%d",&a,&b);

    char c;
    getchar();
    c =getchar();

    switch (c)
    {
    case '+':
        printf("sum is %d",add(a,b));
        break;
    case '-':
        printf("sub is %d",sub(a,b));
        break;
    case '/':
        printf("div is %d",divi(a,b));
        break;
    case '*':
        printf("prod is %d",mul(a,b));
        break;
    
    default:
        break;
    }

    return 0;
}
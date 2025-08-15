#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,n;
    int *pdata;
    printf("enter the size");
    scanf("%d%*c",&i);
    pdata=(int *)calloc(i,sizeof(int));
    if(!pdata){
        exit(1);
    }
    for(n=0;n<i;n++){
        printf("enter the %d value",n);
        scanf("%d%*c",pdata+n);
    }
    printf("you have entered:");
    for (n=0;n<i;n++)
        printf("%d ",pdata[n]);
    printf("\n");
    free(pdata);

    return 0;
}

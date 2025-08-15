// arrays using pointers and dynamic mem allocation 
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int *p;
	int rows,cols;

	printf("enter rows  and cols");
	scanf("%d%d%*c",&rows,&cols);

	p = (int *) malloc(rows*cols*sizeof(int));

	printf("enter the values for the matrix");
	for(__uint8_t i=0;i<rows*cols;i++){
		printf("value %d is :",i);
	        scanf("%d%*c",p+i);

	}
	for(__uint8_t j=0;j<rows*cols;j++){
		printf("%d\t",*(p+j));
	}
	free(p);





	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main(void){
int input, n;
int count = 0;
int *numbers = NULL;
int *more_numbers;
do
{
printf("Enter an integer value (0 to end): ");
scanf("%d%*c", &input);
count++;
more_numbers = (int*)realloc(numbers, count * sizeof(int));
if (more_numbers != NULL)
{
numbers = more_numbers;
numbers[count - 1] = input;
}
else
{
free(numbers);
puts("Error (re)allocating memory");
break;
}
} while (input != 0);
printf("Numbers entered: ");
for (n = 0; n<count; n++)
printf("%d ", numbers[n]);
printf("\n");
free(numbers);
return 0;
}
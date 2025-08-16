#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int val;
    struct stack *top;
} Stack;

void Push(Stack *top){
    if(!top){
        // top = (Stack *)malloc(sizeof(Stack));
        printf("enter value:");
        scanf("%d%*c",&top->val);
    }else{
        Stack *temp;
        // temp = (Stack *)malloc(sizeof(Stack));
        printf("enter value:");
        scanf("%d%*c",&temp->val);
        top = temp;
    }
    

}

int main(void){
    Stack *top = NULL;
    Push(top);
    




    return 0;
}

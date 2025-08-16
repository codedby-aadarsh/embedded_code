#include <stdio.h>
#include <stdlib.h>

// this is defination for the linked list 
// with the value and next address
typedef struct node{
    int value;
    struct node *next;
} Node;




int main(void){
    Node *head =NULL;
    head = (Node *)malloc(sizeof(Node));
    printf("enter the value:");
    scanf("%d%*c",&head->value);
    head->next = (Node *)malloc(sizeof(Node));
    printf("enter the value:");
    scanf("%d%*c",&head->next->value);
    head->next->next=NULL;
    Node *curr =head;
    while(curr){
        printf("%d",curr->value);
        curr=curr->next;
    }
    return 0;
}

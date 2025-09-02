// menu driven in singly linkedlist (singley.h) for create ,display //

#include<stdio.h>
#include<stdlib.h>
#include"single_04.h"


int main(){
    int ch; // for choice//
    int data;
    struct node * head = NULL;
    do{
    printf("1 to create the linkedlist\n");
    printf("2 To display the linkedlist\n");
    printf("Enter the choice numeber :");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
            printf("Enter the data");
            scanf("%d",&data);
            head = createatstart(head,data);
            break;
        case 2:
            display(head);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }while(ch!=3);
}
// menu driven in singly linkedlist (singley.h) for create ,delete,display //

#include<stdio.h>
#include<stdlib.h>
#include"5.h"


int main(){
    int ch; // for choice//
    int data;
    int pos;
    struct node * head = NULL;
    do{
    printf("1 to create the linkedlist\n");
    printf("2 To display the linkedlist\n");
    printf("Enter the choice numeber :");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
            printf("Enter the data : ");
            scanf("%d",&data);
            head=createatstart(head,data);
            break;
        case 2:
            printf("\n Enter the position : ");
            scanf("%d",&pos);
            deleteAtMiddle(head,pos);
            break;
        case 3:
            printf("\n linkedlist is :\n");
            display(head);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }while(ch!=4);
}
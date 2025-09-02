// menu driven in singly linkedlist (singley.h) for create ,display //

#include<stdio.h>
#include<stdlib.h>
#include"4.h"


int main(){
    int ch; // for choice//
    int data;
    struct node * head = NULL;
    do{
    printf("1 to create the linkedlist\n");
    printf("2 To reverse the linkedlist\n");
    printf("3 To display the linkedlist\n");
    
    printf("Enter the choice numeber :");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
            printf("Enter the data :");
            scanf("%d",&data);
            head=createatstart(head,data);
            break;
        case 2:
            printf("The reversed linedklist is :");
            reverseList(head);
            break;
        case 3:
        printf("the linkedlist is : \n");
            display(head);
            break;
            printf("\n");
        default:
            printf("Incorrect Choice\n");
        }
    }while(ch!=4);
}
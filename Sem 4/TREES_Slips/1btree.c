#include<stdio.h>
#include<stdlib.h>
#include"1btree.h"
int main(){
    struct node* root=NULL;
    int choice,data;
    struct node* result;

    do{
        displaymenu();
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the value to insert : ");
            scanf("%d",&data);
            root=insert(root,data);
            break;
            
            case 2:
            printf("Inorder traversal :");
            inorder(root);
            printf("\n");
            break;

        }
    } while(choice!=2);
    return 0;
}

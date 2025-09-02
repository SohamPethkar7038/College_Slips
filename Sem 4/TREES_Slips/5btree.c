#include<stdio.h>
#include<stdlib.h>
#include"5btree.h"
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
            printf("preorder traversal ");
            preorder(root);
            printf("\n");
            break;

            case 3:
            printf("postorder traversal :");
            postorder(root);
            printf("\n");
            break;
            default:
            printf("invalid choice\n");
        }
    } while(choice!=3);
    return 0;
}

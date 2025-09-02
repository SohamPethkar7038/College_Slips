#include<stdio.h>
#include<stdlib.h>
#include"2btree.h"
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
            printf("enter the value to be search :");
            scanf("%d",&data);
            result=search(root,data);
            if(result!=NULL){
                printf("value %d found in the BST\n",data);
            }
            else{
                printf("value %d not found int the BST\n",data);
            }
            break;


            case 3:
            printf("preorder traversal ");
            preorder(root);
            printf("\n");
            break;

        }
    } while(choice!=3);
    return 0;
}

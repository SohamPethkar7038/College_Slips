#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct node *insert(struct node *root,int data){
    if(root==NULL){
        return createnode(data);
    }
    if(data<root->data){
        root->left=insert(root->left,data);
    }
    if(data>root->data){
        root->right=insert(root->right,data);
    }
    return root;
}

int areEqual(struct node *root1,struct node *root2){
    if(root1==NULL && root2==NULL){
        return 1;
    }
    if(root1==NULL || root2==NULL){
        return 0;
    }
    if(root1->data!=root2->data){
        return 0;
    }
    return areEqual(root1->left,root2->left) && areEqual(root1->right,root2->right);
}



void preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    struct node *root1=NULL;
    root1=insert(root1,50);
    insert(root1,30);
    insert(root1,70);
    insert(root1,20);
    insert(root1,40);
    insert(root1,60);
    insert(root1,80);

    struct node *root2=NULL;
    root2=insert(root2,50);
    insert(root2,30);
    insert(root2,70);
    insert(root2,20);
    insert(root2,40);
    insert(root2,60);
    insert(root2,80);

    printf("\n");
    printf("preorder traversal :");
    preorder(root1);
    printf("\n");

    printf("preorder traversal :");
    preorder(root2);
    printf("\n");

    if(areEqual(root1,root2)){
        printf("Two trees are equal \n");
    }
    else{
        printf("Two trees are not equal\n");
    }
    return 0;
}

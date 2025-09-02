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

int countleafnode(struct node *root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countleafnode(root->left) + countleafnode(root->right);
}

void preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    struct node *root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);

    printf("preorder traversal :");
    preorder(root);
    printf("\n");

    printf("Number of the leaf nodes : %d\n",countleafnode(root));
    return 0;
    
    
}
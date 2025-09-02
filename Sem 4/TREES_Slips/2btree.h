struct node{
    int value;
    struct node* left;
    struct node* right;
};

//function to create a new node //
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->value=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

struct node* insert(struct node* root,int data){
    if(root==NULL){
        return createnode(data);
    }
    if(root->value<data){
        root->right=insert(root->right,data);
    }
    if(root->value>data){
        root->left=insert(root->left,data);
    }
    return root;
}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->value);
        preorder(root->left);
        preorder(root->right);
    }
}



struct node* search(struct node* root,int data){
    if(root==NULL || root->value==data){
        return root;
    }
    if(root->value>data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}

void displaymenu(){
    printf("\n 1. insert  a node : ");
    printf("\n 2. search for a value : ");
    printf("\n 3. preorder : ");
    printf("\n 4. Exit ");
    printf("\n\n Enter the choice : "); 
}
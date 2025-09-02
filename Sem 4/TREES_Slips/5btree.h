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

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->value);
    }
}

void displaymenu(){
    printf("\n 1. insert  a node : ");
    printf("\n 2. preorder : ");
    printf("\n 3. postorder : ");
    printf("\n 4. Exit ");
    printf("\n\n Enter the choice : "); 
}
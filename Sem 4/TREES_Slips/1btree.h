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
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->value);
        inorder(root->right);
    }
}



void displaymenu(){
    printf("\n 1. insert  a node : ");
    printf("\n 2. inorder : ");
    printf("\n 3. Exit ");
    printf("\n\n Enter the choice : "); 
}
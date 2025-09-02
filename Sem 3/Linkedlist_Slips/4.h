struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;



struct node *createatstart(struct node *head,int data){

    struct node *temp=head;
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next = NULL;
    if(head==NULL)
    {
        head = new_node;
    }
    else
    {
        temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // pointing to last node//
    temp->next=new_node;
    }
    return head;
}

void display(struct node *temp)
{
     while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

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
    temp->next=new_node;
    }
    return head;
}

void reverseList(){
    struct node *prev_ptr=NULL;
    struct node *current=head;
    struct node *next_ptr;
    while(current!=NULL){
        next_ptr=current->next;
        current->next=prev_ptr;
        prev_ptr=current;
        current=next_ptr;
    }
    struct node *new_head=prev_ptr;
    display(new_head);
}
void display(struct node *temp)
{
     while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

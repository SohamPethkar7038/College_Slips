#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
   struct node *next;
};

typedef struct Node Node;

void insertAtLastNode(Node **head,int data){
     Node *new_node = (Node*) malloc(sizeof(Node));
     new_node->data=data;
     new_node->next=NULL;

if(*head==NULL){
    *head=new_node;
    return;
}
Node *current=*head;
while(current->next!=NULL){
    current=current->next;
}
current->next=new_node;
}

void display(Node *head){
    if(head==NULL){
        printf("Empty Linkedlist\n");
        return;
    }
    Node *current=head;
    while(current!=NULL){
        printf("%d ->",current->data);
        current=current->next;
    }
    printf("NULL");
}

void *mergeLinkedlist(Node *head1,Node *head2){
   Node *dummynode=NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data < head2->data){
            insertAtLastNode(&dummynode,head1->data);
            head1=head1->next;
        }
        else{
            insertAtLastNode(&dummynode,head2->data);
            head2=head2->next;
        }
       
    }
     while (head1!=NULL) {
        insertAtLastNode(&dummynode, head1->data);
        head1 = head1->next;
    }
    
    while (head2!=NULL) {
        insertAtLastNode(&dummynode, head2->data);
        head2 = head2->next;
    }
    return dummynode;
    
}

int main(){
    Node *head1=NULL;
    insertAtLastNode(&head1,6);
    insertAtLastNode(&head1,7);
    insertAtLastNode(&head1,20);

    Node *head2=NULL;
    insertAtLastNode(&head2,2);
    insertAtLastNode(&head2,3);
    insertAtLastNode(&head2,5);
printf("First Linkedlist :\n ");
    display(head1);

    printf("\nSecond Linkedlist :\n ");
    display(head2);

   Node *dummynode= mergeLinkedlist(head1, head2);
    printf("\nResult : \n ");
    display(dummynode);

    return 0;
}
// adding two polynomail using linkedlist in c//


#include<stdio.h>
#include<stdlib.h>

struct Node{
    int coef;
    int exp;
    struct Node *next;
};

typedef struct Node Node;

void insertAtLastNode(Node **head,int coef,int exp){
     Node* new_node = (Node*) malloc(sizeof(Node));
     new_node->coef=coef;
     new_node->exp=exp;
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
        printf("%dx^%d",current->coef,current->exp);
        if(current->next!=NULL){
            printf(" + ");
        }
        current=current->next;
    }
    printf("\n");
}

void *Add(Node *head1,Node *head2){
    Node *result=NULL;

    while(head1!=NULL && head2!=NULL){
        if(head1->exp==head2->exp){
            insertAtLastNode(&result,head1->coef + head2->coef,head1->exp);
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->exp > head2->exp){
            insertAtLastNode(&result,head1->coef,head1->exp);
            head1=head1->next;
        }
        else{
            insertAtLastNode(&result,head2->coef,head2->exp);
            head2=head2->next;
        }
    }

    while (head1 != NULL) {
        insertAtLastNode(&result, head1->coef, head1->exp);
        head1 = head1->next;
    }
    
    while (head2 != NULL) {
        insertAtLastNode(&result, head2->coef, head2->exp);
        head2 = head2->next;
    }
    
    return result;
}

int main(){
    Node *head1=NULL;
    insertAtLastNode(&head1,9,4);
    insertAtLastNode(&head1,2,2);
    insertAtLastNode(&head1,8,0);

    Node *head2=NULL;
    insertAtLastNode(&head2,2,4);
    insertAtLastNode(&head2,3,2);
    insertAtLastNode(&head2,5,1);
    printf("First polynomial:\n ");
    display(head1);

    printf("\nSecond polynomial:\n ");
    display(head2);

    Node* result = Add(head1, head2);
    printf("\nResult : \n ");
    display(result);

    return 0;
}
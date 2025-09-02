// multiplicaltion of the polynomail//

#include<stdio.h>
#include<stdlib.h>

struct Node {
	int coef, exp;
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

Node* MultiplyLinkedList(Node* head1, Node* head2){
	Node *result=NULL;
	Node *ptr1; 
	Node *ptr2;
	ptr1 = head1;
	ptr2 = head2;
	while (ptr1 != NULL) {
		while (ptr2 != NULL) {
			int coeff, exp;	
			coeff = ptr1->coef * ptr2->coef;
			exp = ptr1->exp + ptr2->exp;			
			insertAtLastNode(&result, coeff, exp);		
			ptr2 = ptr2->next;
		}		
		ptr2 = head2;
		ptr1 = ptr1->next;
	}
	return result;
	
}


int main()
{
Node *head1 = NULL; 

	insertAtLastNode(&head1, 3, 3);
	insertAtLastNode(&head1, 6, 1);
	insertAtLastNode(&head1, -9,0);

	Node *head2 = NULL;
	 insertAtLastNode(&head2, 9, 3);
	 insertAtLastNode(&head2, -8, 2);
	 insertAtLastNode(&head2, 7, 1);
	insertAtLastNode(&head2, 2, 0);

	printf("\n\n1st headnomial:- \n");
	display(head1);
	
	printf("\n2nd headnomial:- \n");
	display(head2);	
	Node *result=MultiplyLinkedList(head1, head2);

	printf("\nResultant headnomial:- \n");
	display(result);
	printf("\n\n");
	return 0;
}

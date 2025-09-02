#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertAtStart(int data){
    struct node *new_node= (struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}



void display(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

struct node *mergelist(struct node *head1,struct node *head2){
    struct node *dummy_node= (struct node*)malloc(sizeof(struct node));
    struct node *result;
    struct node *ptr1=head1;
    struct node *ptr2=head2;
    struct node *ptr3=dummy_node;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
}

int main(){


 }
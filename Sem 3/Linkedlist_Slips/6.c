#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;

void insertAtTail(int data){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        return;
    }
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void search(int target) {
    printf("\n\n");
   int pos = 0;
   
   if(head==NULL) {
      printf("Linked List is empty");
      return;
   } 

   struct node *current = head;
   while(current!=NULL) {
      pos++;
      if(current->data == target) {
         printf("The element %d found at position %d\n", target, pos);
         return;
      }

      if(current->next != NULL){
         current = current->next;
      }
      else{
         break;
   }
   }

   printf("%d does not exist in the list\n", target);
   printf("\n");
}

void display(){
    struct node *current=head;
    while(current!=NULL){
        printf("%d ->",current->data);
        current=current->next;
    }
    printf("NULL");
}

int main(){

    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);
    printf("\n");
    display();
    search(20);
    printf("\n");

}
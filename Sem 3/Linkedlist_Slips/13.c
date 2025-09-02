#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;


void insertAtEnd(int data){
    struct node *new_node = (struct node *) malloc (sizeof (struct node));
    new_node->data=data;
    new_node->next=NULL;

    if(head==NULL){
        head=new_node;
        tail=new_node;
        new_node->prev=NULL;
        return;
    }

    struct node *current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=new_node;
    new_node->prev=current;


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


void display (){
    struct node *temp=head;
    while (temp != NULL)
    {
      printf (" %d <->", temp->data);
     temp = temp->next;
    }
    printf("NULL");
}

int main ()
{
  insertAtEnd(10);
  insertAtEnd(20);
  insertAtEnd(30);
  insertAtEnd(40);
  display (head);
  search(10);

  return 0;
}

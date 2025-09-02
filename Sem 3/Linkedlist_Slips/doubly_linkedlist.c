// doubly linkedlist by c//

#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;

void insertStart (int data){
    struct node *new_node = (struct node *) malloc (sizeof (struct node));
    new_node->data = data;
    new_node->next = head;
    new_node->prev = NULL;
    
    if(head==NULL){
        head=new_node;
        tail=new_node;
    }
    else{
        head->prev=new_node;
        head=new_node;
    }
    return;
}

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
   int pos = 0;
   
   if(head==NULL) {
      printf("Linked List is empty");3
      return;
   } 

   struct node *current = head;
   while(current!=NULL) {
      pos++;
      if(current->data == target) {
         printf("%d found at position %d\n", data, pos);
         return;
      }

      if(current->next != NULL)
         current = current->next;
      else
         break;
   }

   printf("%d does not exist in the list\n", target);
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
  insertStart(1);
  insertStart(2);
  insertStart(3);
  
  insertAtEnd(10);
  insertAtEnd(20);
  insertStart(30);
  insertAtEnd(40);
  insertStart(100);
  insertAtEnd(200);
  display (head);

  return 0;
}

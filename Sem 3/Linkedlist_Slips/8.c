#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *head=NULL;

void insertLast(){
  struct node *newnode = (struct node *) malloc (sizeof (struct node));
  int data;
  printf("Enter the data : ");
  scanf("%d",&data);
  newnode->data = data;

  if (head == NULL){
      head = newnode;
      head->next = head;
      return;
      }
      struct node *current = head;
      
      while (current->next != head){
        current = current->next;
      }
      current->next = newnode;
      newnode->next = head;
}

void display(){
    if (head == NULL)
    return;
    
    struct node *temp = head;
    
    do{
      printf ("%d ->", temp->data);
      temp = temp->next;
    }
  while(temp != head);
  printf ("\n");
}

int main ()
{

  struct node *head = NULL;

  printf("Linked List: \n");
  insertLast();
  insertLast();
  insertLast();
  insertLast();
  insertLast();
  display();
  printf("\n");

  return 0;
}
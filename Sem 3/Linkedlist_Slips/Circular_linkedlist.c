#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *head=NULL;

void insertStart (){
  struct node *newnode = (struct node *) malloc (sizeof (struct node));
  int i,data;
  
  printf("enter the data : ");
  scanf("%d",&data);
 
  newnode->data = data;

  // if its the first node being entered
  if (head == NULL)
    {
      head = newnode;
      head->next = head;
      return;
    }

  // if LL already as >=1 node
  struct node *current = head;

  // traverse till last node in LL
  while (current->next != head)
    {
      current = current->next;
    }
  // assign LL's last node's next as this new node
  current->next = newnode;

  // assign newnode's next as currentent head
  newnode->next = head;

  // change head to this new node
  head = newnode;
}

void display ()
{
  // if there are no node in LL
  if (head == NULL){
    return;
  }

  struct node *temp = head;

  //need to take care of circular structure of LL
  do
    {
      printf ("%d ->", temp->data);
      temp = temp->next;

    }
  while (temp != head);
  printf ("");
}

int main ()
{

  struct node *head = NULL;

  printf ("Linked List: ");
  insertStart();
  insertStart();
  insertStart();
  insertStart();

//   insertStart(5);
//   insertStart(4);
//   insertStart(3);
//   insertStart(4);
//   insertStart(5);
  display ();

  return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct node {
  int coeff;
  int exp;
  struct node *next;
};
typedef struct node Node;

void insert(Node **head,int coeff,int exp){
  Node *new_node=(Node*)malloc(sizeof(Node));
  new_node->coeff=coeff;
  new_node->exp=exp;
  new_node->
}
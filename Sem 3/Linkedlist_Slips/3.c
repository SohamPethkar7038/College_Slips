// sorting element in linkdelist using bubble sort//

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;

void AddElementAtLastNode(int data){
struct node *new_node = (struct node*)malloc(sizeof(struct node));
new_node->data=data;
new_node->next=head;
head=new_node;
}



// for sorting//

void sorting_list(){
    struct node *current=head;
    struct node *index;
    int temp;
    if(head==NULL){
        return;
    }
    else{
        while(current!=NULL){
            index=current->next;
        while(index!=NULL){
            if(current->data>index->data){
                temp=current->data;
                current->data=index->data;
                index->data=temp;
            }
            index=index->next;
        }
        current=current->next;
        }
    }
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
    AddElementAtLastNode(10);
    AddElementAtLastNode(40);
    AddElementAtLastNode(30);
    AddElementAtLastNode(20);
    AddElementAtLastNode(50);
    printf("original linkdelist \n");
    display();
    printf("\nSorted linkedlist\n");
    sorting_list();
    display();
    return 0;

}
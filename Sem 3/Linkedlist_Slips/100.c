#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff;
    int exp;
    struct node *next;
};

typedef struct node Node;

void insertAtEnd(Node **head, int coeff, int exp)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->coeff = coeff;
    new_node->exp = exp;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = new_node;
}

void display(Node *head)
{
    if (head == NULL)
    {
        printf("\nEmpty Linkedlist\n");
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        printf("%dx^%d", current->coeff, current->exp);
        if (current->next != NULL)
        {
            printf(" + ");
        }
        current = current->next;
    }
    printf("\n");
}

void *addList(Node *head1, Node *head2)
{
    Node *result = NULL;
    while (head1!=NULL && head2!=NULL)
    {
        if (head1->exp == head2->exp)
        {
            insertAtEnd(&result, head1->coeff + head2->coeff, head1->exp);
            head1 = head1->next;
            head2 = head2->next;
        }
        else if (head1->exp > head2->exp)
        {
            insertAtEnd(&result, head1->coeff, head1->exp);
            head1 = head1->next;
        }
        else
        {
            insertAtEnd(&result, head2->coeff, head2->exp);
            head2 = head2->next;
        }
    }
    while (head1 != NULL)
    {
        insertAtEnd(&result, head1->coeff, head2->exp);
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        insertAtEnd(&result, head2->coeff, head2->exp);
        head2 = head2->next;
    }
    return result;
}

int main()
{
    Node *head1 = NULL;
    insertAtEnd(&head1, 9, 4);
    insertAtEnd(&head1, 3, 4);
    insertAtEnd(&head1, 5, 2);

    Node *head2 = NULL;
    insertAtEnd(&head2, 9, 4);
    insertAtEnd(&head2, 2, 3);
    insertAtEnd(&head2, 6, 4);

    printf("\nFirst linkedlist :\n");
    display(head1);

    printf("\n second Linkedlist :\n");
    display(head2);
    
    Node *result=addList(head1, head2);
    display(result);
    printf("\n");
    return 0;
}
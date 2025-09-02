#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Stack implementation using an array
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *stack, char element) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack->data[++stack->top] = element;
}

// Function to pop an element from the stack
char pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

// Function to return the top element of the stack
char top(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return stack->data[stack->top];
}

// Function to determine the precedence of operators
int precedence(char operator) {
    if (operator == '^')
        return 3;
    else if (operator == '*' || operator == '/')
        return 2;
    else if (operator == '+' || operator == '-')
        return 1;
    else
        return -1;
}

// Function to convert infix expression to postfix notation
void infixToPostfix(char infix[], char postfix[]) {
    Stack stack;
    initStack(&stack);
    int i, j;
    
    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        // If the current character is an operand, add it to the postfix expression
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }
        // If the current character is an opening parenthesis, push it onto the stack
        else if (infix[i] == '(') {
            push(&stack, infix[i]);
        }
        // If the current character is a closing parenthesis, pop elements from the stack and add them to the postfix expression until an opening parenthesis is encountered
        else if (infix[i] == ')') {
            while (!isEmpty(&stack) && top(&stack) != '(') {
                postfix[j++] = pop(&stack);
            }
            // Pop the opening parenthesis from the stack
            if (!isEmpty(&stack) && top(&stack) == '(') {
                pop(&stack);
            }
            else {
                printf("Invalid expression\n");
                exit(1);
            }
        }
        // If the current character is an operator, pop operators from the stack and add them to the postfix expression until an operator with lower precedence is encountered
        else {
            while (!isEmpty(&stack) && precedence(infix[i]) <= precedence(top(&stack))) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, infix[i]);
        }
    }
    
    // Pop any remaining operators from the stack and add them to the postfix expression
    while (!isEmpty(&stack)) {
        if (top(&stack) == '(' || top(&stack) == ')') {
            printf("Invalid expression\n");
            exit(1);
        }
        postfix[j++] = pop(&stack);
    }
    
    postfix[j] = '\0';  // Add null character to the end of postfix expression
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    
    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    
    infixToPostfix(infix, postfix);
    
    printf("Postfix expression: %s\n", postfix);
    
    return 0;
}
// (a*(b+c)*((da)/b))
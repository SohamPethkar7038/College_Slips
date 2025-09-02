#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack{
    int top;
    char items[MAX_SIZE];
};

void initialize(struct Stack *stack){
    stack->top = -1;
}

int isEmpty(struct Stack *stack){
    return stack->top == -1;
}

void push(struct Stack *stack,char data){
    if(stack->top == MAX_SIZE - 1){
        printf("Stack Overflow\n");
    }
    stack->items[++stack->top] = data;
}

char pop(struct Stack *stack){
    if(isEmpty(stack)) {
        printf("Stack Underflow\n");
    }
    return stack->items[stack->top--];
}

char peek(struct Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
    }
    return stack->items[stack->top];
}

int precedence(char operator) {
    if(operator == '+' || operator == '-'){
        return 1;
    }
    else if(operator == '*' || operator == '/'){
        return 2;
    }
    else{
        return 0; // for '('
    }
}

// Function to convert infix expression to postfix notation
void infixToPostfix(char infix[], char postfix[]) {
    struct Stack stack;
    initialize(&stack);

    int i, j;
    char token;

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        token = infix[i];

        if (isalnum(token)){
            postfix[j++] = token;
        } 
        else if (token == '('){
            push(&stack, token);
        }
         else if (token == ')'){
            while (peek(&stack) != '('){
                postfix[j++] = pop(&stack);
            }
            pop(&stack); // Pop '('
        } 
        else{
            while (!isEmpty(&stack) && precedence(token) <= precedence(peek(&stack))) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, token);
        }
    }

    while(!isEmpty(&stack)){
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter the infix expression: ");
    fgets(infix, MAX_SIZE, stdin);

    infix[strcspn(infix, "\n")] = '\0';

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}


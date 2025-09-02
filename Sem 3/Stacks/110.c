#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Stack structure
struct Stack {
    int top;
    int array[MAX_SIZE];
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->array[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->array[stack->top--];
}

// Function to check if a character is a digit
int isDigit(char c) {
    return c >= '0' && c <= '9';
}

// Function to evaluate a postfix expression
int evaluatePostfix(char postfix[]) {
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; postfix[i] != '\0'; ++i) {
        if (isDigit(postfix[i])) {
            push(&stack, postfix[i] - '0');
        } 
        else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            switch (postfix[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    push(&stack, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", postfix[i]);
                    exit(EXIT_FAILURE);
            }
        }
    }

    return pop(&stack);
}

int main() {
    char postfix[MAX_SIZE];
    int i = 0;
    char c;

    printf("Enter a postfix expression: ");

    // Read characters until a newline or reaching the array size limit
    while (i < MAX_SIZE - 1) {
        c = getc(stdin);

        // Break the loop if a newline is encountered
        if (c == '\n') {
            break;
        }

        postfix[i++] = c;
    }

    postfix[i] = '\0'; // Add null terminator

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}


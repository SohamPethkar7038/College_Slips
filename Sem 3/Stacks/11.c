#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

// Structure for stack
struct Stack {
    int top;
    int items[MAX_STACK_SIZE];
};

// Function prototypes
void push(struct Stack *s, int item);
int pop(struct Stack *s);
int evaluatePostfix(char *expression);

int main() {
    char expression[100];

    printf("Enter a postfix expression: ");
    gets(expression);

    int result = evaluatePostfix(expression);

    printf("Result: %d\n", result);

    return 0;
}

// Function to push an item to the stack
void push(struct Stack *s, int item) {
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(1);
    } else {
        s->top++;
        s->items[s->top] = item;
    }
}

// Function to pop an item from the stack
int pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    } else {
        return s->items[s->top--];
    }
}

// Function to evaluate a postfix expression
int evaluatePostfix(char *expression) {
    struct Stack stack;
    stack.top = -1;

    for (int i = 0; expression[i] != '\0'; ++i) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            switch (expression[i]) {
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
                    printf("Invalid operator: %c\n", expression[i]);
                    exit(1);
            }
        }
    }

    return pop(&stack);
}

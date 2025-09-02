#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} CharStack;

void initialize(CharStack* stack) {
    stack->top = -1;
}

int is_empty(const CharStack* stack) {
    return stack->top == -1;
}

int is_full(const CharStack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(CharStack* stack, char value) {
    if (!is_full(stack)) {
        stack->data[++stack->top] = value;
    }
}

char pop(CharStack* stack) {
    char value = '\0';
    if (!is_empty(stack)) {
        value = stack->data[stack->top--];
    }
    return value;
}

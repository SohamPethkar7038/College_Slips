#define MAX_SIZE 100

typedef struct{
    int data[MAX_SIZE];
    int top;
}Stack;

void init(Stack *S){
    S->top = -1;
}

int isFull(Stack *S){
    return S->top == MAX_SIZE - 1;
}

int isEmpty(Stack *S){
    return S->top == -1;
}

void push(Stack *S, int value){
    if (!isFull(S)){
        S->data[++S->top] = value;
        printf("%d pushed to the stack.\n", value);
    } 
    else{
        printf(" Stack overflow.\n");
    }
}

int pop(Stack *S){
    if (!isEmpty(S)){
        return S->data[S->top--];
    } 
    else{
        printf(" Stack underflow.\n");
        return -1; 
    }
}

int peek(Stack *S){
    if (!isEmpty(S)){
        return S->data[S->top];
    } 
    else{
        printf("Stack is empty.\n");
        return -1; 
    }
}



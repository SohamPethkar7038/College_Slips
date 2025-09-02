
#define MAX_SIZE 5

typedef struct{
    int data[MAX_SIZE];
    int top;  
} Stack;

void init(Stack *S){
    S->top = -1;  
}

void push(Stack *S, int value){
    if (S->top < MAX_SIZE - 1){
        S->top++;
        S->data[S->top] = value;
        printf("Pushed %d onto the stack.\n", value);
    } 
    else{
        printf("Stack is full. Cannot push %d.\n", value);
    }
}

int isFull(Stack *S){
    return S->top == MAX_SIZE - 1;
}


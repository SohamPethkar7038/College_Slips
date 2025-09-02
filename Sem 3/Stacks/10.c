#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

struct Stack{
    int items[MAX_SIZE];
    int top;
};

void stackInitialize(struct Stack *stackarray){
    stackarray->top = -1;
}

int isEmpty(struct Stack *stackarray){
    return stackarray->top == -1;
}

void push(struct Stack *stackarray, int value){
    if(stackarray->top == MAX_SIZE - 1){
        printf("Stack overflow\n");
    //    return;
    }
    stackarray->items[++stackarray->top] = value;
}

int pop(struct Stack *stackarray){
    if(isEmpty(stackarray)){
        printf("Stack underflow\n");
        
    }
    return stackarray->items[stackarray->top--];
}

int checkStackContents(struct Stack *stackarray1, struct Stack *stackarray2) {
    if(stackarray1->top != stackarray2->top){
        return 0; 
    }
    for(int i = 0; i <= stackarray1->top; i++){
        if(stackarray1->items[i] != stackarray2->items[i]){
            return 0; 
        }
    }
    return 1; 
    }

int main(){
    struct Stack stack1, stack2;
    stackInitialize(&stack1);
    stackInitialize(&stack2);

    push(&stack1, 1);
    push(&stack1, 2);
    push(&stack1, 3);
    push(&stack1, 4);
    push(&stack1, 45);
    push(&stack1, 40);



    push(&stack2, 1);
    push(&stack2, 2);
    push(&stack2, 3);
    push(&stack2, 40);
    push(&stack2, 41);
    push(&stack2, 42);

    if (checkStackContents(&stack1, &stack2)) {
        printf("The stacks are identical.\n");
    } else {
        printf("The stacks are not identical.\n");
    }
    return 0;
}

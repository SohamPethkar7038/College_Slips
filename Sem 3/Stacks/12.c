// copystack //

#include<stdio.h>
#include<stdlib.h>
#define max_size 50
struct Stack{
    int data[max_size];
    int top;
};
void initialize(struct Stack *stack){
    stack->top=-1;
}
int isempty(struct Stack *stack){
    return stack->top==-1;
}
int isfull(struct Stack *stack){
    return stack->top==max_size-1;
}
void push(struct Stack *stack,int value){
    if(isfull(stack)){
        printf("stack overflow!");
        return;
    }
    stack->top++;
    stack->data[stack->top]=value;
    
}

int pop(struct  Stack *stack){
if(isempty(stack)){
    printf("\nstack underflow!");
}
int poped_data=stack->data[stack->top];
stack->top--;
return poped_data;
}
void display(struct Stack *stack){
    int i;
    if(isempty(stack)){
        printf("\nStack is empty");
        return;
    }
    printf("\nStack contents:");
    for(i=0;i<=stack->top;i++){
        printf("%d",stack->data[i]);
    }
    printf("\n");
}
void copystack(struct Stack *input,struct Stack *desination){
    struct Stack temp;
    initialize(&temp);
    //copy element from input to tempstack
    while(!isempty(input)){
        int curr=pop(input);
        push(&temp,curr);
    }
    //copy elements from tempstack to destination
    while(!isempty(&temp)){
        int curr=pop(&temp);
        push(desination,curr);
        // push(input,curr);
    }
}
int main(){
    struct Stack stack1,stack2;
    initialize(&stack1);
    initialize(&stack2);
    push(&stack1,1);
    push(&stack1,2);
    push(&stack1,3);
    push(&stack1,4);
     push(&stack1,400);
    printf("original");
    display(&stack1);

    copystack(&stack1,&stack2);
    printf("\n\ndisplay copied\n\n");
    display(&stack2);

}

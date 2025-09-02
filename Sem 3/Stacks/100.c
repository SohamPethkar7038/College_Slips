// 10//

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a stack
struct Stack{
 int *arr;
 int capacity;
 int top;
};

// Function to initialize a stack with a given capacity
struct Stack *createStack(int capacity){
 struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
 stack->capacity = capacity;
 stack->top = -1;
//  stack->arr = (int*)malloc(capacity * sizeof(int));
 return stack;
}

// Function to check if a stack is empty
int isEmpty(struct Stack *stack){
 return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int item){
 stack->arr[++stack->top] = item;
}

// Function to pop an element from the stack
int pop(struct Stack *stack){
 if(isEmpty(stack))
 return -1; // Assuming -1 as an indicator for an empty stack
 return stack->arr[stack->top--];
}

// Function to check if two stacks are identical
int areStacksIdentical(struct Stack *stack1, struct Stack *stack2){
 if(stack1->top!= stack2->top){
 return 0; // Stacks have different sizes
 }

 // Compare elements of both stacks without modifying them
 for(int i = 0; i <= stack1->top; i++){
 if(stack1->arr[i] != stack2->arr[i]){
 return 0; // Stacks have different elements
 }
 }

 return 1; // Stacks are identical
}

int main(){
 // Create two stacks
 struct Stack* stack1 = createStack(5);
 struct Stack* stack2 = createStack(5);

 // Push some elements onto the stacks
 push(stack1, 1);
 push(stack1, 2);
 push(stack1, 3);

 push(stack2, 1);
 push(stack2, 2);
 push(stack2, 3);

 // Check if the stacks are identical
 if (areStacksIdentical(stack1, stack2)) {
 printf("Stacks are identical.\n");
 }
else {
 printf("Stacks are not identical.\n");
 }

//  // Clean up memory
//  free(stack1->arr);
//  free(stack1);
//  free(stack2->arr);
//  free(stack2);

 return 0;
}


#include <stdio.h>
#include "6.h"  

int main(){
    Stack stackArray;
    init(&stackArray);  

    int choice, value;

    do{
        printf("\nStack Operations:\n\n");
        printf("1. Push\n");
        printf("2. Check if the stack is full\n\n");
        printf("Enter your choice: \n\n");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter the value to push onto the stack: \n\n");
                scanf("%d", &value);
                push(&stackArray, value);
                break;

            case 2:
                
                if (isFull(&stackArray)){
                    printf("\n\nThe stack is full.\n");
                }
                 else{
                    printf("The stack is not full.\n");
                }
                break;

            default:
                printf("\n\nInvalid choice. Please try again.\n");
        }
    } while (choice != 0);
     return 0;
}

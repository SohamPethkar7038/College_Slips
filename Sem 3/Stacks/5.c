
#include <stdio.h>
#include "5.h"

int main(){
    Stack stackArray;
    int choice, value;

    init(&stackArray);

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(&stackArray, value);
                break;
            case 2:
                value = pop(&stackArray);
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 2);

    return 0;
}

#include <stdio.h>
#include<Stdlib.h>
#include "9.h"

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Initialize Queue\n");
    printf("2. Add Element to Queue\n");
    printf("3. Delete Element from Queue\n");
    printf("4. Exit\n");
}

int main() {
    struct CircularQueue Q;
    int choice, element;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                init(&Q);
                printf("Queue initialized.\n");
                break;
            case 2:
                printf("Enter the element to add: ");
                scanf("%d", &element);
                addQueue(&Q, element);
                printf("%d added to the queue.\n", element);
                break;
            case 3:
                deleteQueue(&Q);
                break;
            case 4:
               printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

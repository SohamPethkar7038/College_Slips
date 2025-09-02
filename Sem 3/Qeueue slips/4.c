
#include <stdio.h>
#include<stdlib.h>
#include "4.h"

int main() {
    Queue myQueue;
    init(&myQueue);

    int choice, data;

    do {
        printf("\nMenu:\n");
        printf("1. Initialize Queue\n");
        printf("2. Add element to Queue\n");
        printf("3. Peek front element of Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                init(&myQueue);
                printf("Queue initialized.\n");
                break;

            case 2:
                printf("Enter the element to add: ");
                scanf("%d", &data);
                add(&myQueue, data);
                printf("%d added to the Queue.\n", data);
                break;

            case 3:
                data = peek(&myQueue);
                if (data != -1) {
                    printf("Front element of the Queue: %d\n", data);
                }
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

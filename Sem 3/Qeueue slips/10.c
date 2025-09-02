#include <stdio.h>
#include<stdlib.h>
#include"10.h"

int main() {
    CircularQueue myQueue;
    initializeQueue(&myQueue);

    int choice, value;

    do {
        printf("\nCircular Queue Menu:\n");
        printf("1. isFull\n");
        printf("2. addFront\n");
        printf("3. getRear\n");
        printf("4. deleteRear\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isFull(&myQueue)) {
                    printf("Queue is full.\n");
                } 
                else {
                    printf("Queue is not full.\n");
                }
                break;

            case 2:
                printf("Enter the value to add to the front: ");
                scanf("%d", &value);
                addFront(&myQueue, value);
                break;

            case 3:
                value = getRear(&myQueue);
                if (value != -1) {
                    printf("Rear element: %d\n", value);
                }
                break;

            case 4:
                deleteRear(&myQueue);
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

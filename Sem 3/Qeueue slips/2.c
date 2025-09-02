#include <stdio.h>
#include<stdlib.h>
#include"2.h"

int main() {
    PriorityQueue queue;
    initializeQueue(&queue);

    int choice, element, priority;

    do {
        printf("\nPriority Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element and priority to enqueue: ");
                scanf("%d %d", &element, &priority);
                enqueue(&queue, element, priority);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                displayQueue(&queue);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}

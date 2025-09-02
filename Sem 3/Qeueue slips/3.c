#include <stdio.h>
#include<stdlib.h>
#include "3.h"

int main() {
    Queue queue;
    int choice, value;

    init(&queue);

    do {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Is Empty?\n");
        printf("4. Peek\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(&queue, value);
                break;
            case 2:
                value = dequeue(&queue);
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                 else {
                    printf("Queue is empty\n");
                }
                break;
            case 3:
                if (isEmpty(&queue)) {
                    printf("Queue is empty\n");
                } 
                else {
                    printf("Queue is not empty\n");
                }
                break;
            case 4:
                value = peek(&queue);
                if (value != -1) {
                    printf("Front element: %d\n", value);
                }
                 else {
                    printf("Queue is empty\n");
                }
                break;
            default:
                printf("Invalid choice, please try again\n");
        }
    } while (choice != 4);

    return 0;
}

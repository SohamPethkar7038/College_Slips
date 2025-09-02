#include <stdio.h>
#define MAX_SIZE 5

struct Queue{
    int front, rear;
    int array[MAX_SIZE];
};

void init(struct Queue* queue){
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(struct Queue* queue){
    return (queue->front == -1);
}

int isFull(struct Queue* queue){
    return (queue->rear == MAX_SIZE - 1);
}

void enqueue(struct Queue* queue, int data){
    if (isFull(queue)) {
        printf("Queue is full.");
        return;
    }
    if (isEmpty(queue))
        queue->front = 0;

    queue->rear++;
    queue->array[queue->rear] = data;
}

int dequeue(struct Queue* queue){
    if (isEmpty(queue)) {
        printf("Queue is empty. \n");
        return -1; 
    }

    int data = queue->array[queue->front];

    if (queue->front >= queue->rear)
        init(queue);
    else
        queue->front++;

    return data;
}

void reverseQueue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot reverse\n");
        return;
    }

    int stack[MAX_SIZE];
    int stackTop = -1;

    while (!isEmpty(queue)) {
        int data = dequeue(queue);
        stack[++stackTop] = data;
    }

    while (stackTop >= 0) {
        int data = stack[stackTop--];
        enqueue(queue, data);
    }
}

void printQueue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->array[i]);
    }
    printf("\n");
}

int main() {
    struct Queue myQueue;
    init(&myQueue);

    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);
    enqueue(&myQueue, 4);

    printf("Original Queue:---> ");
    printQueue(&myQueue);

    reverseQueue(&myQueue);

    printf("\nReversed Queue: --->");
    printQueue(&myQueue);

    return 0;
}

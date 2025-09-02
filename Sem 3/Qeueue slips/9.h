struct Node {
    int data;
    struct Node* next;
};

struct CircularQueue {
    struct Node* front;
    struct Node* rear;
}; 

void init(struct CircularQueue* Q) {
    Q->front = Q->rear = NULL;
}

int isEmpty(struct CircularQueue* Q) {
    return Q->front == NULL;
}

void addQueue(struct CircularQueue* Q, int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if (isEmpty(Q)) {
        Q->front = Q->rear = newNode;
    } else {
        Q->rear->next = newNode;
        Q->rear = newNode;
    }

    Q->rear->next = Q->front;
}

void deleteQueue(struct CircularQueue* Q) {
    if (isEmpty(Q)) {
        printf("Queue is already empty.\n");
        return;
    }

    struct Node* temp = Q->front;

    if (Q->front == Q->rear) {
        // Only one element in the queue
        Q->front = Q->rear = NULL;
    } else {
        Q->front = Q->front->next;
        Q->rear->next = Q->front;
    }

    free(temp);
    printf("Element deleted from the queue.\n");
}

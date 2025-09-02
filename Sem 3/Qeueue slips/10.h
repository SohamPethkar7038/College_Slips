#define MAX_SIZE 5

typedef struct {
    int data[MAX_SIZE];
    int front, rear;
} CircularQueue;

void initializeQueue(CircularQueue *Q) {
    Q->front = -1;
    Q->rear = -1;
}

int isFull(const CircularQueue *Q) {
    return (Q->front == (Q->rear + 1) % MAX_SIZE);
}

int isEmpty(const CircularQueue *Q) {
    return (Q->front == -1 && Q->rear == -1);
}

void addFront(CircularQueue *Q, int value) {
    if (isFull(Q)) {
        printf("Error: Queue is full, cannot add to the front.\n");
    } else {
        if (isEmpty(Q)) {
            Q->front = 0;
            Q->rear = 0;
        } else {
            Q->front = (Q->front - 1 + MAX_SIZE) % MAX_SIZE;
        }
        Q->data[Q->front] = value;
        printf("Added %d to the front of the queue.\n", value);
    }
}

int getRear(const CircularQueue *Q) {
    if (isEmpty(Q)) {
        printf("Error: Queue is empty, cannot get rear element.\n");
        return -1;
    } else {
        return Q->data[Q->rear];
    }
}

void deleteRear(CircularQueue *Q) {
    if (isEmpty(Q)) {
        printf("Error: Queue is empty, cannot delete rear element.\n");
    } else {
        if (Q->front == Q->rear) {
            initializeQueue(Q);
        } else {
            Q->rear = (Q->rear - 1 + MAX_SIZE) % MAX_SIZE;
        }
        printf("Deleted element from the rear of the queue.\n");
    }
}


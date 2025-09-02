
#define MAX_SIZE 5

typedef struct {
    int array[MAX_SIZE];
    int front;
    int rear;
} Queue;

void init(Queue *Q) {
    Q->front = -1;
    Q->rear = -1;
}

int isFull(Queue *Q) {
    return (Q->rear == MAX_SIZE - 1);
}

int isEmpty(Queue *Q) {
    return (Q->front == -1 && Q->rear == -1);
}

void add(Queue *Q, int data) {
    if (isFull(Q)) {
        printf("Queue is full. Cannot add more elements.\n");
        return;
    }

    if (isEmpty(Q)) {
        Q->front = 0;
        Q->rear = 0;
    } else {
        Q->rear++;
    }

    Q->array[Q->rear] = data;
}

int remove(Queue *Q){
    if (isEmpty(Q)){
        printf("Queue is empty. Cannot remove.\n");
        return -1; // Assuming -1 is an invalid value for the queue
    }

    int data = Q->array[Q->front];

    // if (Q->front == Q->rear) {
    //     // Last element in the queue
    //     Q->front = -1;
    //     Q->rear = -1;
    // } else {
    //     Q->front++;
    // }

    return data;
}

#define MAX_SIZE 100

typedef struct {
    int array[MAX_SIZE];
    int front;
    int rear;
} Queue;

void init(Queue *Q){
    Q->front = -1;
    Q->rear = -1;
}

int isFull(Queue *Q) {
    return (Q->rear == MAX_SIZE - 1);
}

int isEmpty(Queue *Q) {
    return (Q->front == -1 && Q->rear == -1);
}

void addQueue(Queue *Q, int data) {
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



int deleteQueue( Queue *Q){
    if (isEmpty(Q)) {
        printf("Queue is empty. \n");
        return -1; 
    }

    int data = Q->array[Q->front];

    if (Q->front >= Q->rear)
        init(Q);
    else
        Q->front++;

    return data;
}

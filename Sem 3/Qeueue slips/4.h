#define MAX_SIZE 5
typedef struct{
    int array[MAX_SIZE];
    int front;
    int rear;
} Queue;

void init(Queue *queue){
    queue->front = -1;
    queue->rear = -1;
}

int isFull(Queue *queue){
    return (queue->rear == MAX_SIZE - 1);
}

int isEmpty(Queue *queue){
    return (queue->front == -1 && queue->rear == -1);
}

void add(Queue *queue, int data){
    if(isFull(queue)){
        printf("Queue is full.\n");
        return;
    }

    if(isEmpty(queue)){
        queue->front = 0;
        queue->rear = 0;
    } 
    else{
        queue->rear++;
    }

    queue->array[queue->rear] = data;
}

int peek(Queue *queue){
    if(isEmpty(queue)){
        printf("Queue is empty. .\n");
        return -1; 
    }
    return  queue->array[queue->front];
}

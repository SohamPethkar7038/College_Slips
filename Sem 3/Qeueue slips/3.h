
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

void init(Queue *queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

int isEmpty(Queue* queue) {
    return (queue->front == NULL);
}


void enqueue(Queue* queue, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->front = newNode;
        queue->rear = newNode;
    } 
    else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        return -1;
    }

    int value = queue->front->data;
    Node* temp = queue->front;

    if (queue->front == queue->rear) {
        // If there's only one element in the queue
        queue->front = NULL;
        queue->rear = NULL;
    } 
    else {
        queue->front = queue->front->next;
    }

    free(temp);
    return value;
}


int peek(Queue* queue) {
    if (isEmpty(queue)) {
        // Queue is empty, return an error value (you can modify this part as needed)
        return -1;
    }

    return queue->front->data;
}

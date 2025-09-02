
struct Node{
    int data;
    struct Node *next;
};

struct CircularQueue{
    struct Node *front;
    struct Node *rear;
};


void init(struct CircularQueue *Q){
    Q->front = Q->rear = NULL;
}

int isEmpty(struct CircularQueue *Q){
    return Q->front == NULL;
}

void addQueue(struct CircularQueue *Q, int data){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(Q)){
        Q->front = Q->rear = newNode;
    } 
    else{
        Q->rear->next = newNode;
        Q->rear = newNode;
    }

    Q->rear->next = Q->front;
}

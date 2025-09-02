#define MAX_SIZE 10

typedef struct {
    int element;
    int priority;
} PriorityQueueNode;

typedef struct {
    PriorityQueueNode array[MAX_SIZE];
    int size;
} PriorityQueue;

void initializeQueue(PriorityQueue *queue) {
    queue->size = 0;
}

void enqueue(PriorityQueue *queue, int element, int priority) {
    if (queue->size < MAX_SIZE) {
        int i = queue->size - 1;

        // Shift elements to make room for the new element
        while (i >= 0 && queue->array[i].priority > priority) {
            queue->array[i + 1] = queue->array[i];
            i--;
        }

        // Insert the new element
        queue->array[i + 1].element = element;
        queue->array[i + 1].priority = priority;

        // Update the size of the queue
        queue->size++;
    } 
    else {
        printf("Queue is full. Cannot enqueue.\n");
    }
}

void dequeue(PriorityQueue *queue){
    if (queue->size > 0) {
        // Remove the element with the highest priority (at the front)
        printf("Dequeued element: %d\n", queue->array[0].element);

        // Shift the remaining elements to fill the gap
        for (int i = 0; i < queue->size - 1; i++) {
            queue->array[i] = queue->array[i + 1];
        }

        // Update the size of the queue
        queue->size--;
    } else {
        printf("Queue is empty. Cannot dequeue.\n");
    }
}

void displayQueue(PriorityQueue *queue) {
    printf("Priority Queue: ");
    for (int i = 0; i < queue->size; i++) {
        printf("(%d, %d) ", queue->array[i].element, queue->array[i].priority);
    }
    printf("\n");
}

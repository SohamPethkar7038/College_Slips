#include <stdio.h>
#include <stdlib.h>

// Node to represent edges
struct Node {
    int vertex;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Function to add an edge to the graph
void addEdge(struct Node* adjList[], int src, int dest) {
    // Add edge from src to dest
    struct Node* newNode = createNode(dest);
    newNode->next = adjList[src];
    adjList[src] = newNode;

    // Since the graph is undirected, add an edge from dest to src as well
    // newNode = createNode(src);
    // newNode->next = adjList[dest];
    // adjList[dest] = newNode;
}

// Function to display the adjacency list representation of the graph
void displayGraph(struct Node* adjList[], int vertices) {
    for (int i = 0; i < vertices; i++) {
        struct Node* temp = adjList[i];
        printf("Vertex %d: ", i);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int vertices, edges;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // Create an array of pointers for adjacency list
    struct Node* adjList[vertices];
    for (int i = 0; i < vertices; i++) {
        adjList[i] = NULL; // Initialize each pointer to NULL
    }

    // Accept edges
    int src, dest;
    for (int i = 0; i < edges; i++) {
        printf("Enter edge %d (source destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        addEdge(adjList, src, dest);
    }

    // Display the adjacency list
    printf("\nAdjacency List:\n");
    displayGraph(adjList, vertices);

    return 0;
}
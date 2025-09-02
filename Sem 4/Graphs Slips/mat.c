#include <stdio.h>
int main() {
int vertices, edges;
// Get the number of vertices and edges from the user
printf("Enter the number of vertices: ");
scanf("%d", &vertices);
printf("Enter the number of edges: ");
scanf("%d", &edges);
// Declare the adjacency matrix
int adjMatrix[vertices][vertices];
// Initialize the adjacency matrix with zeros
for (int i = 0; i < vertices; i++) {
for (int j = 0; j < vertices; j++) {
adjMatrix[i][j] = 0;
}
}
// Input the edges
printf("Enter the edges (source destination):\n");
for (int i = 0; i < edges; i++) {
int src, dest;
scanf("%d %d", &src, &dest);
adjMatrix[src][dest] = 1;
adjMatrix[dest][src] = 1; // Assuming an undirected graph
}
// Display the adjacency matrix
printf("Adjacency Matrix:\n");
for (int i = 0; i < vertices; i++) {
for (int j = 0; j < vertices; j++) {
    printf("%d ", adjMatrix[i][j]);
}
printf("\n");
}
// Calculate in-degree and out-degree
printf("\nNode\tIn-Degree\tOut-Degree\n");
for (int i = 0; i < vertices; i++) {
int inDegree = 0, outDegree = 0;
for (int j = 0; j < vertices; j++) {
if (adjMatrix[j][i] == 1) // Incoming edge to node i
inDegree++;
}
printf("%d\t%d\t", i, inDegree);
}
return 0;
}
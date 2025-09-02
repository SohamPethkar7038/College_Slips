#include <stdio.h>
#define INFINITY 1000000 // A large enough value to represent
void create(int a[10][10], int n) {
int i, j;
printf("Enter the weights of edges (0 for no edge):\n");
for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) {
printf("\nEnter weight of edge between vertex %d and %d: ", i, j);
scanf("%d", &a[i][j]);
}
}
}
void dijkstra(int a[10][10], int n, int src) {
int dist[20], visited[20];
int i, j, min_dist, u;
// Initialize distances and visited array
for (i = 0; i < n; i++) {
dist[i] = INFINITY;
visited[i] = 0;
}
dist[src] = 0;
printf("\nShortest distances from source vertex %d:\n",
src);
// Perform Dijkstra's algorithm
for (i = 0; i < n - 1; i++) {
min_dist = INFINITY;
for (j = 0; j < n; j++) {
if (!visited[j] && dist[j] < min_dist) {
min_dist = dist[j];
u = j;
}
}
visited[u] = 1;
for (j = 0; j < n; j++) {
if (!visited[j] && a[u][j] && dist[u] != INFINITY
&& dist[u] + a[u][j] < dist[j]) {
dist[j] = dist[u] + a[u][j];
}
}
}
// Print the shortest distances
for (i = 0; i < n; i++) {
printf("Shortest distance from %d to %d: ", src, i);
if (dist[i] == INFINITY)
printf("INF\n");
else
printf("%d\n", dist[i]);
}
}
int main() {
int a[10][10], n, src_vertex;
printf("\nEnter the number of vertices: ");
scanf("%d", &n);
create(a, n);
printf("\nEnter the source vertex: ");
scanf("%d", &src_vertex);
dijkstra(a, n, src_vertex);
return 0;
}
#include<stdio.h>
struct q{
int data[20];
int front,rear;
}q1;
void initq(){
q1.front=-1;
q1.rear=-1;
}
void add(int n){
q1.rear++;
q1.data[q1.rear]=n;
}
int del(){
q1.front++;
return q1.data[q1.front];
}
int emptyq(){
return(q1.front==q1.rear);
}
void create(int a[10][10],int n){
int i,j;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("\n Is there edge between V%d and V%d\n",i,j);
scanf("%d",&a[i][j]);
}
}
}
void bfs(int a[10][10],int n){
int i,j,v;
int visited[20];
initq();
for(i=0;i<n;i++){
    visited[i]=0;
}
printf("\n The BFS Traversal = ");
v=0;
visited[v]=1;
add(v);
while (!emptyq()){
v=del();
printf("v%d->",v);
for(j=0;j<n;j++){
if((a[v][j]==1)&&(visited[j]==0)){
add(j);
visited[j]=1;
}
}
}
}
int main(){
int a[10][10],n;
printf("\n Enter the number of vertices = ");
scanf("%d",&n);
create(a,n);
bfs(a,n);
}
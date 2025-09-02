#include<stdio.h>
struct s{
    int data[20];
    int top;
}stack;

void initstack(){
    stack.top==-1;
}
void push(int n){
    stack.top++;
    stack.data[stack.top]=n;
}

int pop(){
    int temp=stack.data[stack.top];
    stack.top--;
    return temp;
}
int emptystack(){
    return (stack.top==-1);
}

void create(int a[10][10],int n){
    int i,j;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("\n is there edge between vertex %d and vertex %d ?\n",i,j);
        scanf("%d",&a[i][j]);    
    }
}
}
void dfs(int a[10][10],int n){
    int i,j,v;
    int visited[20];
    initstack();
    for(i=0;i<n;i++){
        visited[i]=0;
    }
    printf("\n the dfs traversal is :\n");

    v=2 ;
    push(v);
    while(!emptystack()){
        v=pop();
        if(visited[v]==0){
            printf("v%d",v);
            visited[v]=1;
        }
        for(j=n-1;j>=0;j--){
            if((a[v][j]==1) && (visited[j]==0)){
                push(j);
            }
        }
    }
}
void main(){
    int a[10][10],n;
    printf("enter the number of vertices :");
    scanf("%d",&n);
    create(a,n);
    dfs(a,n);
}
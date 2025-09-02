#include<stdio.h>
#include<stdlib.h>

void FCFS(int request[],int n, int head){
    int total_head_movements=0;

    printf("\n order of execution :%d",head);

    for(int i=0;i<n;i++){ 
        total_head_movements+=abs(request[i]-head);
        printf("->%d",request[i]);
        head=request[i];
    }

    printf("\ntotal head movements :%d",total_head_movements);
}

int main(){
    int n,head;

    // accept number of disl blocks 
    printf("enter the total number of disk blocks");
    scanf("%d",&n);

    int request[n];

    // accept the disk request string

    printf("enter the disk request strings :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&request[i]);
    }

    // accept the start head position

    printf("enter the start head position :");
    scanf("%d",&head);

    printf("\n initial head position :\n",head);
    FCFS(request,n,head);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

void FCFS(int request[],int n,int head){
    int total_head_movement=0;

    printf("\n order of execution :%d",head);

    for(int i=0;i<n;i++){
        total_head_movement+=abs(request[i]-head);
        printf("->%d",request[i]);
        head=request[i];
    }
    printf("\n total head movements :",total_head_movement);
}

int main(){
    int n,head;

    // accept number of disk blocks

    printf("enter the total number of disk block");
    scanf("%d",&n);

    int request[n];
    //accept the disk request string

    printf("enter the disk request strings :");
    for(int i=0;i<n;i++){
        scanf("%d",&request[i]);
    }

    // accept the start head position

    printf("enter the start head position :");
    scanf("%d",&head);


}
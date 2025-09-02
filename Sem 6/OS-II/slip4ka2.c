#include<stdio.h>
#include<stdlib.h>

void SCAN(int request[],int n,int head,int direction,int total_blocks){
    int total_head_movements=0,i,j,index,temp;
    int left[100],right[100],result[100];
    int left_size=0,right_size=0,result_size=0;

    //sorting it
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(request[i]<head){
            temp=request[i];
            request[i]=request[j];
            request[j]=temp;
        }
    }
}
// dividing request into left and right based on head

for(int i=0;i<n;i++){
    if(request[i]<head){
        left[left_size++]=request[i];
    }
    else{
        right[right_size++]=request[i];
    }
}


    // scan algorithm execution
    if(direction==-1){
        for(i=left_size-1;i>=0;i--){
            result[result_size++]=left[i];
        }
        result[result_size++]=0; // move to start of disk

        for(int i=0;i<right_size;i++){
            result[result_size++]=right[i];
        }
    }
        else{
            // right first
            for(int i=0;i<right_size;i++){
                result[result_size++]=right[i];
            }
            result[result_size++]=total_blocks-1;
            for(int i=left_size-1;i>=0;i--){
                result[result_size++]=left[i];
            }
        }

        // calculate total head moviement
        printf("\n order of execution :%d",head);
        for(int i=0;i<result_size;i++){
            total_head_movements+=abs(result[i]-head);
            printf("->%d",result[i]);
            head=result[i];
        }
    

printf("\n total head moviements : \n",total_head_movements);

}




int main(){
    int n,head,i,direction,total_blocks;
    // accept number of disk blocks;

    printf("enter the disk blocks number :");
    scanf("%d",&total_blocks);

    // acceopt the number of request
    printf("enter the number of disk request :");
    scanf("%d",&n);

    int request[n];

    // accept the disk request string
    printf("enter the disk request string(%d values) :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&request[i]);
    }

    // accept the start position

    printf("enter the start position :");
    scanf("%d",&head);

    // accept the scan direction
    printf("enter the direction :");
    scanf("%d",&direction);

    printf("\n initial head position :%d\n",head);
    SCAN(request,n,head,direction,total_blocks);
    return 0;
}

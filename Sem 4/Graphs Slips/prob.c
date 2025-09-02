#include<stdio.h>
#define TB_SIZE 10
int h[TB_SIZE]={0};
void insert(){
    int i, key,hkey,index;
    printf("\n Enter the value to insert into Hash table:");
    scanf("%d",&key);
    hkey=key%TB_SIZE;

    for(i=0;i<TB_SIZE;i++){
        index=(hkey+i)%TB_SIZE;
        if(h[index]==0){
            h[index]=key;
            break;
        }
    }
    if(i==TB_SIZE){
        printf("\nMore value can't be inserted");

    }

}

void display(){
    int i;
    for(i=0;i<TB_SIZE;i++){
        printf("\n At index %d  value=%d",i,h[i]);
    }
}

int main(){
    int ch;
    do
    {
        printf("\n 1:Insert Into  Hash table \n 2:Display \n 3:exit: ");
        printf("\n Enter choice :");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:insert();
                break;
            case 2:display();
                break;
            case 3:printf("Exit");
        }

    }while(ch!=3);

}
#include<stdio.h>
#include<stdlib.h>

#define process 5
#define resource 3

void acceptAvailiable(int availiable[]){
    printf("Enter the availiable resource (A,B,C)");
    for(int i=0;i<resource;i++){
        scanf("%d",&availiable);
    }
}

void displayAllocationMax(int allocation[process][resource],int max[process][resource]){
    printf("\n Allocation matrix :\n");

    for(int i=0;i<process;i++){
        for(int j=0;j<resource;j++){
            printf("%d",allocation[i][j]);
        }
        printf("\n");
    }

    printf("\nMax matrix\n");

    for(int i=0;i<process;i++){
        for(int j=0;j<resource;j++){
            printf("%d",max[i][j]);
        }
        printf("\n");
    }
}

void displayNeedMatrix(int allocation[process][resource],int max[process][resource]){
    printf("\n Need matrix :\n");

    for(int i=0;i<process;i++){
        for(int j=0;j<resource;j++){
            printf("%d",max[i][j]-allocation[i][j]);
        }
        printf("\n");
    }
}

void displayMatrix(int availiable[]){
    printf("\n Availiable resource\n");

    for(int i=0;i<resource;i++){
        printf("%d",availiable[i]);
    }
    printf("\n");
}

int main(){
    int allocation[process][resource]={
        {2,3,2},
        {4,0,0},
        {5,0,4},
        {4,3,3},
        {2,2,4}
    };

    int max[process][resource]={
        {9,7,5},
        {5,2,2},
        {1,0,4},
        {4,4,4},
        {6,5,5}
    };

    int availiable[resource]={3,3,2};

    int choice;

    do{
        printf("\n menu:\n");
        printf("1. accept availiable\n");
        printf("2. Display Allocation and Max\n");
        printf("3. Display Need Matrix\n");
        printf("4. Display Available\n");
        printf("5. Exit\n");

        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            acceptAvailiable(availiable);
            break;

            case 2:
            displayAllocationMax(allocation,max);
            break;

            case 3:
            displayNeedMatrix(allocation,max);
            break;

            case 4:
            displayAvailible(availiable);
            break;

            default:
            printf("Invalid choice. Please try another choice\n");
        }
    }while(choice!=3);
    return 0;
}
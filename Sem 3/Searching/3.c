// file que for linear search//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cities{
    char city[100];
    int code;
};
typedef struct cities cit;

int readfile(cit *);
void display(cit*,int);



int readfile(cit* arr){
    char fname[30];
    int i=0;
    FILE *fp;
    printf("Enter the file name to be read:\n");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL){
        printf("Error in opening file\n");
        exit(0);
    }
    while(!feof(fp)){
        fscanf(fp,"%d %s",&arr[i].code,arr[i].city);
        i++;
    }
    return i-1;
}

void display(cit* arr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d %s \n",arr[i].code,arr[i].city);
    }
}

int  LinearSearch(cit *arr,int n,char *key){
    int i;
    for(i=0;i<n;i++){
        if(strcmp(arr[i].city,key)){
            printf("\n %s city is found \n Code of %s city is %d",key,key,arr[i].code);
            break;
        }
    }
    if(i==n){
        printf("Not present in file");
    }
}

int main(){
    int n;
    char key[30];
    cit arr[100];
    n=readfile(arr);
    printf("structure data after reading file\n");
    display(arr,n);
    printf("Enter the city to be searched :");
    scanf("%d",&key);
    LinearSearch(arr,n,key);
    return 0;
}
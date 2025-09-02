#include<stdio.h>
#include<stdlib.h>
struct employee
{
   char name[20];
   int age;
};
typedef struct employee emp;
int readfile(emp *a);
void display(emp *a,int n);
void bubblesort(emp *a,int n);
void selectionsort(emp *a,int n);
int main(){
    int n;
    emp a[100];
    n=readfile(a);
    printf("details before sorting:");
    display(a,n);
    printf("\ndetails after sorting:");
   bubblesort(a,n);
   display(a,n);
    selectionsort(a,n);
    display(a,n);

}
int readfile(emp *a){
    char fname[30];
    int i;
    FILE *fp;
    printf("enter the file name:");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL){
        printf("error in opening file");
        exit(0);
    }
    while(!feof(fp)){
        fscanf(fp,"%s %d",a[i].name,&a[i].age);
        i++;
    } 
    return i-1;
}

void display(emp *a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("\n%s %d",a[i].name,a[i].age);
    }
}
//bubble sort 
void bubblesort(emp *a,int n){
    int i,j;
    emp temp;
    for(i=1;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j].age>a[j+1].age){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
//selectin sort
void selectionsort(emp *a,int n){
    emp temp;
    int key,i,j;
    for(i=0;i<n-1;i++){
        key=i;
        for(j=i+1;j<n;j++){
            if(a[key].age>a[i].age){
                temp=a[key];
                a[key]=a[i];
                a[i]=temp;
            }
        }
    }
}
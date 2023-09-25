#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("hello1");
    printf("hello2");
    int size;
    printf("enter size of array ");
    scanf("%d",&size);

    int arr[size];
    int i=0;
    while(i<size){
        printf("enter the element no. %d ",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i<size){
        printf("%d ",arr[i]);
        i++;
    }
    i=0;
    int value;
    printf("enter value to be searched ");
    scanf("%d",&value);
    while(i<size && arr[i]!=value){
        i++;
    }
    if(i<size){
        printf("the entered value is present at index = %d",i);
    }
    else{
        printf("entered value is absent");
    }
}
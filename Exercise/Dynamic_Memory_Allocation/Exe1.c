// Write a program in C to find the largest element using Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*arr;
    printf("Input total number of elements(1 to 100): \n");
    scanf("%d",&n);

    arr=(int*)calloc(n,sizeof(int));
    if (arr==NULL)
    {
        printf("out of memory\n");
        exit(0);
    }

    printf("Enter element\n");
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    for (int i = 0; i < n; i++)
    {
        if(*arr<*(arr+i)) 
           *arr=*(arr+i);
    }
    printf("The Largest element is :  %d \n",*arr);
    return 0;
    
    
}
// Write a program in C to read n number of values in an array and display it in reverse order

#include<stdio.h>

int main(){

    int n,temp,i=0,j=n-1;
    int arr[5];
    printf("Input the number of elements to store in the array: ");
    scanf("%d",&n);
    
    
    while ( i < j)
    {
        scanf("%d",&arr);
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        printf("%d",arr);
    }
    



}
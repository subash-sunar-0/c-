//Write a program in C to store n elements in an array and print the elements using pointer.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int size;
    
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];
   
    for(int i=0;i<size;i++){
        printf(" element - %d : ",i);
	    scanf("%d\n",arr+i);
    }

    for(int i=0;i<size;i++)
    {
	    printf(" element - %d : %d \n",i,*(arr+i));
	}
	return 0;
}

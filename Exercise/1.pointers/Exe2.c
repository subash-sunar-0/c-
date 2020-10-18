//Write a program in C to add numbers using call by reference.

#include<stdio.h>
int sum(int *,int *);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    //int add=;
    printf("The sum of two number is: %d",sum(&a,&b));
    return 0;
}

int  sum(int *ptr,int *ptr1){
    int add=*ptr + *ptr1;
    return add;
}
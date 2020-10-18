//Write a program in C to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int maxValue(int *,int *);

int main(){
    int a,b;
    printf("Enter first num: \n");
    scanf("%d",&a);

    printf("Enter second number: \n");
    scanf("%d",&b);

    //int max=;
    printf("The maxmum number between %d and %d is: %d",a,b,maxValue(&a,&b));
}
int maxValue(int *ptr1,int *ptr2){
    if(*ptr1> *ptr2){
        return *ptr1;
    }
    else{
        return *ptr2;
    }
}
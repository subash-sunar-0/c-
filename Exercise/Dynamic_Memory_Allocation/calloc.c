#include<stdio.h>
#include<stdlib.h>

void main(){
    int n,*arr;
    printf("Enter the size: \n");
    scanf("%d",&n);

    arr=(int*)calloc(n,sizeof(int));
    if (arr==NULL)
    {
        printf("out of Memory \n");
    }
    else
    {
        printf("arr element are \n");
        for(int i=0;i<n;i++){
            printf("%d",*(arr+i));
        }
    }
    
    
}
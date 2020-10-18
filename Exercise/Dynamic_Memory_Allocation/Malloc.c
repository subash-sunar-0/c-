#include<stdio.h>
#include<stdlib.h>

struct Emp
{
    int eno;
    char ename[20];
    float esal;
};

int main(){

    struct Emp * ptr;

    ptr=(struct Emp*)malloc(sizeof(struct Emp));
    if (ptr==NULL)
    {
        printf("Out of Memory\n");
    }
    else
    {
        printf("Enter employee detail\n");
        scanf("%d %s %f",&ptr->eno,ptr->ename,&ptr->esal);

    }
    printf("%d %s %f",ptr->eno,ptr->ename,ptr->esal);
    
    
}

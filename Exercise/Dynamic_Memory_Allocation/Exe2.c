//Write a program in C to Calculate the length of the string using a pointer.
#include<stdio.h>
#include<string.h>

int length(char*);
int main(){
    char ch[20];
    int l;

    printf("input a string\n");
    scanf("%s",ch);

    l=length(ch);
    printf("The length of the given string %s is : %d ",ch, l);
    printf("\n\n\n");

}
int length(char *ptr){
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
    
}
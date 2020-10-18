#include<stdio.h>

int main()
{
    int ch;
    FILE* fp;
    fp=fopen("C:\\Users\\subas\\Desktop\\Exercise\\4.File\\test.txt","r");
    while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    

}
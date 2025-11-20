#include<stdio.h>
#include<string.h>
void main()
{
    char name[10]= "Balaji";
    char new[100] = "Hello";
    printf("%c\n",name[4]);
    printf("length of string is %d\n",strlen(name));
    strcat(new,name);
    printf("%s\n",new);
}
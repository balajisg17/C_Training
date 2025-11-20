#include<stdio.h>
#include<string.h>
void main()
{
    char des [100]= "we are good students";
    char se [100]= "Good";
    if((strstr(des,se))!=NULL)
    printf("found");
    else
    printf("not found");
}
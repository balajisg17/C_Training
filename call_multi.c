    //write a function which will multi three number call by re#include<stdio.h
#include<stdio.h>
void multi_value(int a,int b,int c)
{
    int multi=a*b*c;
    printf("%d",multi);
}
void multi_ref(int *a,int*b,int*c)
{
    int multi=*a * *b * *c;
    printf("%d",multi);
}
void main()
{
    int a=2;
    int b=5;
    int c =5;
    multi_value(a,b,c);
    multi_ref(&a,&b,&c);
}

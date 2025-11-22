//write a function which will multi three number call by re#include<stdio.h
#include<stdio.h>
void add_value(int a,int b,int c)
{
    int add=a+b+c;
    printf("%d",add);
}
void add_ref(int *a,int*b,int*c)
{
    int add=*a + *b + *c;
    printf("%d",add);
}
void main()
{
    int a=2;
    int b=5;
    int c=5;
    add_value(a,b,c);
    add_ref(&a,&b,&c);
}

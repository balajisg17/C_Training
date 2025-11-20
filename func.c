#include<stdio.h>
int myadd(int a, int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
    int a=67;
    int b=93;
    printf("%d\n",myadd(a,b));
    int c=12;
    int d=34;
    printf("%d\n",myadd(c,d));
}
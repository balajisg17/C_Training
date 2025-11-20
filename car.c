#include<stdio.h>
void main()
{
    int t;
    int sale=0;
    int q[3]={4,6,8};
    int c[2]={10,25};
    for(int i=0; i<3; i++)
    {
        t=q[i]*c[i];
        sale = sale+t;

    }
    printf("total sales is %d",sale);
}
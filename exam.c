#include<stdio.h>
void exam(int m1,int m2,int m3)
{
    if(m1>40&&m2>40&&m3>40)
    {
        printf("you passed");
    }
    else
    {
        printf("you failed");
    }
}
void main()
{
    int m1,m2,m3;
    float avg;
    printf("enter the marks");
    scanf("%d%d%d",&m1,&m2,&m3);
    exam(m1,m2,m3);
    avg=((m1+m2+m3)/3);
    printf("%f",avg);

}
//pointer stors es the memmory address of the variable
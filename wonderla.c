#include<stdio.h>
void main()
{
    int age;
    float hig; 
    printf("enter age: ");
    scanf("%d",&age);
    printf("enter hig: ");
    scanf("%f",&hig);
    if((age>12)&&(hig>4.5))
    {
        printf("you can ride roller coester");
    }
    else
    {
        printf("grow up and come back");
    }
}
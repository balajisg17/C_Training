#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[50];
    float max_speed;
    float prize;
};
void main()
{
    int n;
    printf("enter number of cars :");
    scanf("%s",n);
    struct car c[3];
    for(int i=0; i<3; i++)
    {
        printf("enter name of car :");
        scanf("%s",c[i].name);

        printf("enter the max_speed :");
        scanf("%f",&c[i].max_speed);
    
        printf("enter the price :");
        scanf("%f",&c[i].prize);
    }
    printf("car details \n");
    for(int i=0; i<n; i++)
    {
        printf("name %s\n",c[i].max_speed);
        printf("max_speed%f\n",c[i].max_speed);
        printf("prize%f\n",c[i].prize);
    }

}

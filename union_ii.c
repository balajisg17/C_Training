//union using two variable int money and another float variable tax and take a money from user assinge money variable
//take the tax from the user assign to the tax vrible form thr ures
//overwrite the 
#include<stdio.h>
union data
{
    int money;
    float tax;
};
void main()
{
    union data u;
    int m;
    printf("enter the money");
    scanf("%d",& m);
    u.money=m;
    printf("u.money=%d \n",u.money);

    float t;
    printf("enter tax");
    scanf("%f",&t);
    u.tax=t;
    printf("u.tax= %f \n",u.tax);
    u.money=m-t;
    printf("%d \n",u.money);


    
}    
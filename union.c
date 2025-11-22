#include<stdio.h>
union data
{
    int i;
    float f;
};
int main()
{
    union data d;
    d.i=10;
    printf("d.i=%d \n",d.i);
    d.f=3.14;
    printf("d.f=%f \n",d.f);

    printf("d.i(after writing f)=%d \n",d.i);
}    
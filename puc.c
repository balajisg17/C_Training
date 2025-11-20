//write a c function which ill accept 1 input parameter or and returns the perimeter of circle, declare pi as a const
#include<stdio.h>
float radius(int r)
{
    float const pi=3.14;
    float peri=2*pi*r;
    return peri;
}
void main()
{
    int r = 5;
    printf("%f",radius(r));
}
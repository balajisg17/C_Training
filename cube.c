//write a c functoin which will accept 3 perameters l,b,h and returns volume of the cube
#include<stdio.h>
int pera(int l, int b, int h)
{
    int area=l*b*h;
    return area;
}
void main()
{
    int l= 3;
    int b= 4;
    int h= 5;
    printf("%d",pera(l,b,h));
}
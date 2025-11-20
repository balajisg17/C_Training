//write a fun which will accecpt two input parameters x,y and returns x^2+y^2
#include<stdio.h>
int square(int x ,int y)
{
    int sqe=(x+y)*(x+y);
    return sqe;
}
void main()
{
    int x=9;
    int y=1;
    printf("sum of square is%d\n",square(x,y));
}
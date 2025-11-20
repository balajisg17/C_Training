#include<stdio.h>
void main()
{
    int arr[4][2] = { {23,32},{14,41},{46,64} ,{45,45} };
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
}                                                   
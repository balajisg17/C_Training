//write a c function which will accept an arr, its size as n and returns the diff b/w first and last element
#include<stdio.h>
#include<stdlib.h>
int sub_arr (int arr[],int n )
{
    int sub = arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={10,20,30,40,50};
    int n = 5;
    printf("%d",sub_arr(arr,n));
}  
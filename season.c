#include<stdio.h>
enum season
{
  jan=1,
  feb,mar,apr,may,june,july,aug,sep,oct,nov,dec;
};
void main()
{
    enum seasons month;
    month=june;
    printf("%d",month);
}
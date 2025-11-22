#include<stdio.h>
enum seasons
{
  jan=1,
  feb,mar,apr,may,june,july,aug,sep,oct,nov,dec
};
void main()
{
    enum seasons month;
    month=may;
    char *seasons;
    switch(month)
    {
        case dec: case jan: case feb:
        seasons="winter";break;
        case mar: case apr: case may:
        seasons="summer";break;
        case june: case july: case aug:
        seasons="monsoon";break;
        case sep: case oct: case nov:
        seasons="spring";break;
        
    }
    printf("%d \n",month);
    printf("%s",seasons);
}
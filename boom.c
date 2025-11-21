#include<stdio.h>
void name(char first[], char last[], int sw)
{
    int i=0;
    char full[100];
    while(first[i]!='\0')
    {
       full[i] =first[i];
       i++;
    }
    full[i]=' ';
    i++;
    int j=0;
    while(last[j]!= '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }
    printf("%s", full);
    int len=i+1;
    if(len<sw)
    printf("fits in the screen ");
    else
    printf("dose not fit in the screen ");
}
void main()
{
    char first[] = "Bhuvan";
    char last[] = "Balaji ";
    int sw;
    sw=15;
    name(first,last,sw);
}
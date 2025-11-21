#include<stdio.h>
void name(char first[], char last[])
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
    while(last[j]= '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }
    printf("%s", full);
}
void main()
{
    char first[] = "Chethan";
    char last[] = "kumar";
    name(first,last);
}
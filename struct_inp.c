#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
    char name[100];
    char author[100];
    char publication;
    int year;
};
void main()
{
    int n;
    printf("enter number of book :");
    scanf("%s",&n);
    struct book b[3];
    for(int i=0; i<3; i++)
    {
        printf("enter name of book :");
        scanf("%s",b[i].name);

        printf("enter the author of book :");
        scanf("%s",b[i].author);
    
        printf("enter the year publication :");
        scanf("%d",&b[i].year);
    }

}

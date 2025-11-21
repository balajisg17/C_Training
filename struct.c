#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age=18;
    s1.marks=90.99;
    strcpy(s1.name,"balaji");

    struct student s2;
    s2.age = 23;
    s2.marks = 99.99;
    strcpy(s2.name,"chethan");

struct student s3={"pop",34,61};

printf("%s ", s3.name);
printf("%d",s3.age);


}
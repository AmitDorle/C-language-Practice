#include<stdio.h>

struct Student
{
    int age;
    char name[10];
};

int main()
{

    struct Student obj[5];
    for(int i=1;i<=5;i++)
    {
        printf("Enter the age of student %d:\n",i);
        scanf("%d",&obj[i].age);
        printf("Enter the name of student %d:\n",i);
        scanf("%s",&obj[i].name);
    }
    printf("The structured array is:\n");
    printf("Age\tName\n");
    for(int i=1;i<=5;i++)
    {
        printf("%d\t%s\n",obj[i].age,obj[i].name);
    }


}
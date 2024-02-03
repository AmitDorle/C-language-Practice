#include<stdio.h>
#include<conio.h>
#include<math.h>

struct student
{
  int rollno;
  char name[20];
};


int main()
{
   struct student s1,s2,s3;
   printf("\n\n\tEnter student1 rollno & name: ");
   scanf("%d%s",&s1.rollno,s1.name);
   printf("\n\n\tEnter student2 rollno & name: ");
   scanf("%d%s",&s2.rollno,s2.name);
   printf("\n\n\tEnter student3 rollno & name: ");
   scanf("%d%s",&s3.rollno,s3.name);
   printf("\n\n\tstudent 1 created successfully!!!");
   printf("\n\n\tRoll number:%d name:%s",s1.rollno,s1.name);
   printf("\n\n\tstudent 2 created successfully!!!");
   printf("\n\n\tRoll number:%d name:%s",s2.rollno,s2.name);
   printf("\n\n\tstudent 3 created successfully!!!");
   printf("\n\n\tRoll number:%d name:%s",s3.rollno,s3.name);

   return 0;
}
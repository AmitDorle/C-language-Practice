#include<stdio.h>

// PROGRAM 1
// int main()
// {
//     printf("HELLO WORLD");
//     return 0;
// }


// PROGRAM 2
// int main()
// {
//     int a=10;
//     int b=20;
//     printf("THE addition of a and b is %d",a+b);

//     return 0;
// }


// PROGRAM 3
// int main()
// {
//     int a=10;
//     float c=1.4;
//     char ch='a';
//     double b=20;
//     printf("%d\n",a);
//     printf("%f\n",c);
//     printf("%c\n",ch);
//     printf("%lf\n",b);

//     return 0;
// }


// PROGRAM 4
// int main()
// {
//     int a;
//     printf("Enter any number:\n");
//     scanf("%d",&a);
//     if(a%2==0)
//     {
//         printf("The number is even\n");
//     }
//     else
//     {
//         printf("The number is odd");
//     }
//     return 0;
// }


// PROGRAM 5
// int main()
// {
//     int a;
//     printf("Enter any number from 1 to 7:\n");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1:
//         {
//             printf("Sunday");
//             break;
//         }
//         case 2:
//         {
//             printf("Monday");
//             break;
//         }
//         case 3:
//         {
//             printf("Tuesday");
//             break;
//         }
//         case 4:
//         {
//             printf("Wednesday");
//             break;
//         }
//         case 5:
//         {
//             printf("Thursday");
//             break;
//         }
//         case 6:
//         {
//             printf("Friday");
//             break;
//         }
//         case 7:
//         {
//             printf("Saturday");
//             break;
//         }
//         default:
//         {
//             printf("Invalid number!!!");
//         }
//     }
//     return 0;
// }


// PROGRAM 6
// int main()
// {
//     int a=1;
//     while(a<=10)
//     {
//         printf("%d\n",a);
//         a++;
//     }

//     return 0;
// }


// PROGRAM 7
// int main()
// {
//     int i=1;
//     do
//     {
//         printf("%d\n",i);
//         i++;
//     }while(i<=10);
//     return 0;
// }


// PROGRAM 8
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         for(int j=1;j<=10;j++)
//         {
//             printf("%d\t",i*j);
//         }
//          printf("\n");
//     }
//     return 0;
// }


// PROGRAM 9
// struct Student
// {
//     int age;
//     int rollno;
// };

// int main()
// {
//     struct Student Stu[5];
//     int a;
//     printf("\nEnter number of Subjects\n");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++)
//     {
//         printf("\nEnter age of student %d\n",i);
//         scanf("%d",&Stu[i].age);
//         printf("\nEnter rollno of student %d\n",i);
//         scanf("%d",&Stu[i].rollno);
//     }
//     printf("\nAge\trollno\n");

//     for(int i=1;i<=a;i++)
//     {
//         printf("%d\t%d\n",Stu[i].age,Stu[i].rollno);
//     }
//     return 0;
// }


// PROGRAM 10
// int main()
// {
//     int arr[5];
//     int n;
//     printf("Enter number of Subjects for storing marks:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }

//     return 0;
// }


// PROGRAM 11
// int main()
// {
//     int arr[10];
//     int n;
//     printf("Enter number of Subjects for storing marks:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }

//     int posi,number;
//     printf("\nEnter the position and number which you want to insert:\n");
//     scanf("%d",&posi);
//     scanf("%d",&number);
//     for(int i=n+1;i>=posi-1;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[posi]=number;
//     printf("The array after insertion is:\n");
//     for(int i=1;i<=n+1;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }


// PROGRAM 12
// int main()
// {
//     int arr[10];
//     int n;
//     printf("Enter number of Subjects for storing marks:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }

//     int posi;
//     printf("\nEnter the position where you want to delete:\n");
//     scanf("%d",&posi);
//     for(int i=posi;i<n;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     printf("The array after deletion is:\n");
//     for(int i=1;i<n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }


// PROGRAM 13
// int main()
// {
//     int arr[10];
//     int n;
//     printf("Enter number of Subjects for storing marks:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     int max=arr[1];
//     int temp;
//     for(int i=1;i<=n;i++)
//     {
//         if(max<arr[i])
//         {
//             max = arr[i];           
//         }
//     }
//     printf("The maximum number is %d",max);
// }


// PROGRAM 14
// int main()
// {
//     int arr[10];
//     int n;
//     printf("Enter number of Subjects for storing marks:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     int min=arr[1];
//     for(int i=1;i<=n;i++)
//     {
//         if(min>arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     printf("The minimum number is %d",min);
// }


// PROGRAM 15
// int main()
// {
//     int arr[10];
//     int n;
//     printf("Enter number of Subjects for storing marks:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i+1;j<=n;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("\nThe array is decending order is:\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }

//     return 0;
// }


// PROGRAM 16
// int main()
// {
//     int arr[10];
//     int n;
//     printf("Enter number of Subjects for storing marks:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i+1;j<=n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("\nThe array is ascending order is:\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr[i]);
//     }

//     return 0;
// }


// PROGRAM 17
// int main()
// {
//     int arr1[10];
//     int n;
//     printf("Enter number of Subjects for storing marks of student 1:\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d\t",arr1[i]);
//     }

//     int arr2[10];
//     int m;
//     printf("\nEnter number of Subjects for storing marks of student 2:\n");
//     scanf("%d",&m);
//     for(int i=1;i<=m;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     printf("The array is\n");
//     for(int i=1;i<=m;i++)
//     {
//         printf("%d\t",arr2[i]);
//     }

//     int concat[50];
//     for(int i=1;i<=n;i++)
//     {
//         concat[i]=arr1[i];
//     }
//     for(int i=1;i<=n;i++)
//     {
//         concat[n+i]=arr2[i];
//     }
//     printf("\nThe array after concatenation is:\n");
//     for(int i=1;i<=n+m;i++)
//     {
//         printf("%d\t",concat[i]);
//     }
//     return 0;
// }


// PROGRAM 18
int main()
{
    int fact=1;
    int n;
    printf("Enter the number for which you want factorial:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("\nThe factorial of %d is %d",n,fact);
    return 0;
}
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
int main()
{
    int a;
    printf("Enter any number:\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
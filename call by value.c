#include<stdio.h>

int sum(int a, int b)
{
    int c = a+b;
    printf("The sum of a and b is %d\n",c);
    return 0;
}

int main()
{
    sum(5,8);

    return 0;
}
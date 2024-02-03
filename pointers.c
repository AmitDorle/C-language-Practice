#include <stdio.h>

int a=5;
int sqaure(int *a);

int main()
{
    // int a=10;
    // int *ptr=&a;
    // printf("%d\n" , ptr);
    // printf("%d\n" , &a);
    // printf("%d\n" , &ptr);
    sqaure(a);
    return 0 ;
}

int sqaure(int *a)
{
    int sqa= *a**a;
    printf("The sqaure is %d" , sqa);
}
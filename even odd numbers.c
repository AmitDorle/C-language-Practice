#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
    int choose;
    printf("Do you want to continue.....\n");
    printf("Enter 1(yes) or 0(no)\n");
    scanf("%d",&choose);
    if(choose==1)
    {
        main();
    }
    else
    {
        return 0;
    }
}
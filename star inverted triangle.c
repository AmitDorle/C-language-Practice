#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of iterations you want:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=n*2;k>i*2-1;k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
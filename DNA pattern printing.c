#include<stdio.h>

int dna(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of iteration:\n");
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        dna(n);
    }
    return 0;
}
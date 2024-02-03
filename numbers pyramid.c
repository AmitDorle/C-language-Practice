#include<stdio.h>

int main()
{
    int n;
    int a=1;
    printf("Enter the number of iterations\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i*2-1;k++)
        {
            printf("%d",a%2);
            a++;
        }
        printf("\n");
    }
}
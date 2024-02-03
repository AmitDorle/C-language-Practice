#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number upto which you want to print numbers:\n");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
#include<stdio.h>

int main()
{
    
    for(int i=1;i<=5;i++)
    {
        int a=1;
        for(int k=5;k>=i;k--)
        {
            printf("%c",64+a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
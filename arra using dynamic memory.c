#include <stdio.h>
#include<stdlib.h>

int main()
{
    
    int n;
    printf("\nEnter number for first array\n");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*(sizeof(int)));
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The first array is\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    int m;
    printf("\nEnter number for second array\n");
    scanf("%d",&m);
    int *arr1 = (int*)malloc(m*(sizeof(int)));
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nThe first array is\n");
    for(int i=1;i<=m;i++)
    {
        printf("%d ",arr1[i]);
    }
    
    int concat[50];
    for(int i=1;i<=n;i++)
    {
        concat[i]=arr[i];
    }
    
        for(int i=1;i<=m;i++)
    {
        concat[n+i]=arr1[i];
    }

    printf("\nThe merged array is\n");
    for(int i=1;i<=n+m;i++)
    {
        printf("%d ",concat[i]);
    }
    return 0;
}

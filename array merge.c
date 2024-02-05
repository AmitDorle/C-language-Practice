#include<stdio.h>

int main()
{
    int arr[10],n;
    printf("Enter the number of students for array 1:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }

    int arr1[10],m;
    printf("Enter the number of students for array 2:\n");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("The array is\n");
    for(int i=1;i<=m;i++)
    {
        printf("%d ",arr1[i]);
    }

    int merge[50];
    for(int i=1;i<=n;i++)
    {
        merge[i]=arr[i];
    }
    for(int i=1;i<=m;i++)
    {
        merge[n+i]=arr1[i];
    }
    printf("\nArray after merging is\n");
    for(int i=1;i<=n+m;i++)
    {
        printf("%d ",merge[i]);
    }
    return 0;
}
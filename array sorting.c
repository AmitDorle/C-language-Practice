#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],n;
    printf("Enter the number of students:\n");
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
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nArray in descending order is\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nArray in ascending order is\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
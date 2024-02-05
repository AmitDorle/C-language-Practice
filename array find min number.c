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

    int min=arr[1];
    for(int i=1;i<=n;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("The minimum number is %d",min);

}
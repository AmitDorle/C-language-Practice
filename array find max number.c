#include<stdio.h>

int main()
{
    int arr[10],n;
    printf("Enter the number of students for array :\n");
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

    int max=arr[1];
    for(int i=1;i<=n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nThe maximum number is %d",max);

}
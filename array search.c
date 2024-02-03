#include<stdio.h>

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

    int posi;
    printf("\nEnter the posi for which you want to search an number:\n");
    scanf("%d",&posi);

    for(int i=1;i<=n;i++)
    {
        if(i==posi)
        {
            printf("The number at position %d is %d",posi,arr[i]);
        }
    }

    return 0;
}
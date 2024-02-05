#include<stdio.h>

int main()
{
    int length;
    int width;
    printf("Enter length of rectangle\n");
    scanf("%d",&length);
    printf("Enter width of rectangle\n");
    scanf("%d",&width);

    int aor = length*width;
    printf("The area of recatngle for given length and width is %d",aor);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=rand();
    int guess;
    do
    {
        printf("Enter your guessing number..\n");
        scanf("%d",&guess);
        if(guess==a)
        {
            printf("You guessed it correctly\n");
        }
        else if(a>guess)
        {
            printf("You enter smaller number plz enter large number\n");
        }
        else
        {
            printf("You enter large number plz enter small number\n");
        }
    } while (guess!=a);
    int opi;
    printf("\nDo you want to continue yes(1) and no(0)\n");
    scanf("%d",&opi);
    if(opi==1)
    {
        main();
    }
    else
    {
        return 0;
    }
    return 0;
}
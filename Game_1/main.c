#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,k,t,j,r=2;
    printf("\n\n\n********Welcome*******\n\n\n");
    printf("           CAN U GUESS THE NUMBER?        ");
    printf("\n\nBriefing you about the game:\nThis is a guessing game where you have to guess a number that is already fixed by the system.\nThe number of tries can be set by you, remember it should be less than 7.\nThe number is a single digit number.\n\n\n*****BEST OF LUCK*****");
    t=time(NULL);
    srand(t);
    k = rand()%10;

    printf("\n\nEnter the number of tries you require: ");
    scanf("%d", &r);

    for(i=1;i<=r;++i)
    {   if(r>7)
        {


        printf("\n\nPlease choose less number of tries to make it challenging.\n\n");

           printf("Enter the number of tries you require: ");
           scanf("%d", &r);
        }

        printf("Guess a number: ");
        scanf("%d", &j);
        if(j==k)
        {
            printf("WELL DONE!!\n\n");
            break;
        }
        else if(j>k)
        {
            printf("The guessed number is greater than the required number\n");
            printf("Number of tries remaining:%d\n", r-i);
        }
        else if(j<k)
        {
            printf("The guessed number is smaller than the required number\n");
            printf("Number if tries remaining:%d\n", 7-i);
        }

    }
    if(j==k)
        printf("\n\n\n\nTHANK YOU!!\n\n");
    else if(j!=k)
    {
        printf("The expected number was %d", k);
        printf("\n\n\n\nTHANK YOU!!\n\n");
    }
    return 0;
}

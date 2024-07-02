#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Rock 1
//Paper 2
//Scissors 3
int match_result(int a, int b)
{
    if((a==1) && (b==2))
        return 2;
    else if((a==1) && (b==3))
        return 1;
    else if((a==2) && (b==1))
        return 1;
    else if((a==2) && (b==3))
        return 2;
    else if((a==3) && (b==1))
        return 2;
    else if((a==3) && (b==2))
        return 1;
    else
        return 0;//This is the case for draw.
}
int user_input()
{
    int inp;
    do{
        printf("For Rock enter 1.\n");
        printf("For Paper enter 2.\n");
        printf("For Scissors enter 3.\n");
        printf("Enter your choice: ");
        scanf("%d", &inp);
        if(!(inp>=1 && inp<=3))
            printf("\nERROR---Input a valid number.\n\n");
    }while(!(inp>=1 && inp<=3));
    return inp;
}
void cmp_choice(int a)
{
    if(a==1)
        printf("\nComputer chose Rock");
    else if(a==2)
        printf("\nComputer chose Paper");
    else if(a==3)
        printf("\nComputer chose Scissors");
    return 0;
}

int main()
{
    int user_score=0,cmp_score=0,user_inp,cmp_inp,i,j,sca;
    srand(time(NULL));
    while(!i)
    {
        user_inp=user_input();
        cmp_inp=(rand()%3)+1;
        cmp_choice(cmp_inp);
        j=match_result(user_inp,cmp_inp);
        if(j==1)
            ++user_score;
        else if(j==2)
            ++cmp_score;
        else if(j==0)
        {
            ++cmp_score;
            ++user_score;
        }
        printf("\n\n To continue press any integer, to terminate press 0: ");
        scanf("%d", &sca);
        if(sca==0)
            i=1;
    }
    printf("****************SCORE-CARD*****************");
    printf("\n\t-------------------------------------\n");
    printf(" \t\tComputer scored: %d", cmp_score);
    printf("\n \t\tYou scored: %d", user_score);
    printf("\n\t-------------------------------------\n");
    if(user_score>cmp_score)
        printf("\n\n CONGRATULATIONS!! You Won..\n");
    else if(cmp_score>user_score)
        printf("\n\nBETTER LUCK NEXT TIME!! The computer won..\n\n");
    else if(cmp_score==user_score)
        printf("\n\nIt's a Tie!!\n\n");
        return 0;
}

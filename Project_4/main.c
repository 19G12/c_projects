#include <stdio.h>
#include <stdlib.h>

void main()
{
    int N;
    printf("Enter the number of Neighbours (SHOULDNT EXCEED 8 AND NOT LESS THAN 0): ");
    scanf("%d", &N);
    if(N==0)
        printf("Pupeta will be sad and force you to listen to his story.");
    else if(N == 1)
        printf("He will ask you to deliver the pizza to his only neighbour, you will be late");
    else if(N>=2 && N<=5)
        printf("Pupeta will have a great mood, he might be singing songs and may even crack jokes. You will be tipped");
    else if(N==7)
        printf("He will be serving a great drink and shall invite you to taste, but he wont tip you");
    else if(N==6 || N==8)
        printf("TOO ANGRY AND FURIOUS, DELIVER PIZZA AND LEAVE ASAP!!");
    else
         printf("The entered number of Neighbours is invalid");
    return 0;


}

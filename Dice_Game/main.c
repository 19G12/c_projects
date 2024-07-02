#include <stdio.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int i,n,j,k,sum=0,t;
    t=time(NULL);
    srand(t);
    for(j=1;j>0;++j)
    {
    k=rand()%10;
    printf("\n\nComputer has rolled two dice....Guess the sum.\nEnter a value <0 to terminate.");
    printf("\n\nGuess a number: ");
    scanf("%d", &n);
    if(n<0)
     break;
    else if(n==k)
    {
        printf("\nBravo!!You got it right.");
        sum=sum+10;
        printf("Your attempt no is:%d", j);
    }
    else if(n!=k)
    {
        printf("\nDarn!!Thats a bad attempt.");
        sum=sum-5;
        printf("\nYour attempt no is:%d", j);
        printf("\nThe sum was:%d", k);
    }
    printf("\nYour total score is:%d", sum);

    }
    printf("\n\n\n\n       ******THANK U FOR PLAYING******\n\n\n\n\n");


    return 0;


}

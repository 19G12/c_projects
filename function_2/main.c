#include <stdio.h>

int check_prime(int a)
{
    int i,j=0;
    for(i=1;i<=1000;++i)
    {
        if(a%i==0)
            ++j;
    }
    return j;
}
int main()
{
    int prime,j;
    printf("Enter a number less than 1000 to check if it is a prime: ");
    scanf("%d", &prime);
    j=check_prime(prime);
    if(j>2)
        printf("\nThe entered number is not a prime number.\n\n");
    else
        printf("\nYes it is a prime number\n\n");
}

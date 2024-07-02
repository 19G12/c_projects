#include <stdio.h>
#include <math.h>
int check_prime(int test)
{
    int i,k=0;
    for(i=2;i<=sqrt(test);++i)
    {
        if(test%i==0)
           ++k;
    }
    if(k==0)
        return 1;
    else
        return 0;
}
int sum_of_primes(int a, int b)
{
    int i,sum=0;
    for(i=a;i<=b;++i)
    {
        if(check_prime(i))
            sum = sum + i;
    }
    return sum;
}
int main()
{
    int a,b,sum;
    printf("\n\nEnter the range of numbers to find the sum of prime numbers: ");
    scanf("%d %d", &a, &b);
    sum=sum_of_primes(a,b);
    printf("\n\nThe sum of all primes in given range is %d\n\n", sum);
    return 0;
}

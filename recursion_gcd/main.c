#include <stdio.h>
int get_gcd(int a, int b)
{
    if(a==b)
        return a;
    else if(a>b)
    {
        a=a-b;
        get_gcd(a,b);
    }
    else
    {
        b=b-a;
        get_gcd(a,b);
    }
}
int main()
{
    int no1,no2;
    printf("Enter the two numbers to find the GCD:     ");
    scanf("%d %d", &no1, &no2);
    printf("\nThe GCD of %d and %d is %d\n\n", no1, no2, get_gcd(no1,no2));
    return 0;
}

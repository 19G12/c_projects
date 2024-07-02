#include<stdio.h>
#include<stdlib.h>

int gcd(int no1, int no2)
{
    if(no1 == no2)
    {
        return no1;
    }
    else if(no1 > no2)
    {
        no1 = no1 -no2;
        return gcd(no1, no2);
    }
    else
    {
        no2 = no2 - no1;
        return gcd(no1, no2);
    }
}
int main()
{
    int no1, no2, hcf;
    printf("Enter the numbers to find their greatest common divisor: ");
    scanf("%d %d", &no1, &no2);
    hcf = gcd(no1, no2);
    printf("\nThe Greatest Common Divisor for the two entered number is: %d", hcf);
    printf("\n\n\n");
    return 0;
}

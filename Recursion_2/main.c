#include <stdio.h>
int a,b;
int power(int a, int b);
int main()
{
    int product;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("\nEnter the power: ");
    scanf("%d", &b);
    product=power(a,b);
    printf("\n\n%d to the power %d is %d\n\n\n", a, b, product);
    return 0;
}
int power(int a, int b)
{
    static int p=1,k=1;
    if(k<=b)
    {
        p=p*a;
        ++k;
        power(a,b);
    }
    return p;
}

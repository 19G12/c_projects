#include <stdio.h>
#include <math.h>
int count_input(int a)
{
    int j=0;
    while(a>0)
    {
        a=a/10;
        ++j;
    }
    return j;
}
int check_armstrong(int a)
{
    int i,sum=0,k;
    int j=a;
    k=count_input(a);
    for(i=1;i<=k;++i)
    {
        sum = sum + pow(j%10,k);
        j=j/10;
    }
    if(sum==a)
        return 1;
    else
        return 0;

}
int main()
{
    int a;
    printf("Enter a number to check whether it is an Armstrong number ");
    scanf("%d", &a);
    if(check_armstrong(a))
        printf("\n\nYes!! It is an Armstrong number.\n\n");
    else
        printf("\n\nNo!! It is not an Armstrong number.\n\n");
    return 0;
}


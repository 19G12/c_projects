#include <stdio.h>
int get_fabonacci(int a)
{
    int sum=0;
    if(a==1 || a==2)
        ++sum;

    else
        sum=get_fabonacci(a-1)+get_fabonacci(a-2);
    return sum;
}
void main()
{
    int i,fab;
    printf("Enter how many terms of the series do you required: ");
    scanf("%d", &fab);
    printf("\n");
    for(i=1;i<=fab;++i)
    {
        printf(" %d", get_fabonacci(i));
    }
    printf("\n\n");
    return;
}


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
int main()
{
    int value;
    printf("Enter the term of the Fabonacci series you want : ");
    scanf("%d", &value);
    printf("\n\nThe value is %d\n\n", get_fabonacci(value));
    return 0;
}

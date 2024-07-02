#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum=0,i=3,n;
    printf("Please input the value of the number upto which you have to find the sum: ");
    scanf("%d", &n);
    while(i<=n)
    {
        if(i%3==0 && i%5!=0)
        {
            sum = sum + i;
            ++i;
        }
        else if(i%3!=0 || i%5==0)
            ++i;


    }
    printf("\n\nThus the required sum is:%d\n\n", sum);


    return 0;


}

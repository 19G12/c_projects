#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        printf("*");

        printf("\n");
    }
    return 0;
}

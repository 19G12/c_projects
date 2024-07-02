#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,k,p,n;
    printf("Enter the number of rows for the Pascal triangle: ");
    scanf("%d", &p);
    for(i=1;i<=p;i++)
    {
        for(j=0;j<=p-i;j++)
         printf(" ");

         n=1;
        for(k=1;k<=i;k++)
            {
                printf(" %d", n);
                n=(n*(i-k))/k;

            }
            printf("\n");
    }
    return 0;
}

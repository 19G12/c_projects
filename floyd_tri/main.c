#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,p=0;
    printf("Please enter the number of rows: ");
    scanf("%d", &n);
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j)
        {
           ++p;
           printf(" %d", p);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter how many rows you want to print: ");
    scanf("%d", &n);
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j)
        {
            if((i+j)%2==0)
                printf(" 1");
            else if((i+j)%2!=0)
                printf(" 0");
        }
        printf("\n");
    }
    return 0;
}

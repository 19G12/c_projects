#include <stdio.h>
int main()
{
    int i,j,x[10][10],y[10][10],m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    printf("Enter the number of column: ");
    scanf("%d", &j);
    if((i<3 || i>10) && (j<3 || j>10))
        printf("\nPlease enter valid number of rows and column.\n\n");
    else if(i<3 || i>10)
        printf("Please enter valid number of rows.\n\n");
    else if(j<3 || j>10)
        printf("\nPlease enter valid number of column.\n\n");
    else
    {
    for(m=0;m<i;++m)
    {
        for(n=0;n<j;++n)
        {
        printf("Enter the values for M[%d][%d]:", m, n);
        scanf("%d", &x[m][n]);
        y[n][m]=x[m][n];
        }
    }
    printf("\n\nThe matrix M is:\n");
    for(m=0;m<i;++m)
    {
        for(n=0;n<j;++n)
        {
            printf("\t%d", x[m][n]);
        }
        printf("\n");
    }
    printf("The transpose of M is:\n\n");
    for(m=0;m<j;++m)
    {
        for(n=0;n<i;++n)
        {
            printf("\t%d", y[m][n]);
        }
        printf("\n");
    }
    }
    printf("\n\n\n\t\t\t****THANK YOU!!****\n\n\n");
    return 0;

}







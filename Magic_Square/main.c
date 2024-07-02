#include <stdio.h>
int main()
{
    int i,n,j,k,sum;

    printf("Enter the dimension for magic square (Must be odd integers only): ");
    scanf("%d", &n);

    int M[n][n];

    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            M[i][j]=0;
        }
    }
    M[0][(n-1)/2]=1;
    i=0;
    j=(n-1)/2;
    for(k=1;k<(n*n);++k)
    {
        i=i-1;
        j=j+1;

        if(i==-1 || j==n)
        {
            if(i==-1 && j!=n)

                i=n-1;

            else if(i!=-1 && j==n)

                j=0;

            else if(i==-1 && j==n)
            {
                i=n-1;
                j=0;
            }
        }

        else if(M[i][j]!=0)

            i=i+1;


        else if(i==n || j==-1)
        {
            if(i==5 && j!=-1)

                i=0;

            else if(i!=5 && j==-1)

                j=n-1;

            else if(i==n && j==-1)
            {
                i=0;
                j=n-1;
            }
        }
        M[i][j]=k+1;

    }
    printf("\nThe magic square is\n\n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("\t%d", M[i][j]);
        }
        printf("\n");
    }
    sum=n*(n*n+1)/2;
    printf("\n\nThe magic sum is:%d\n\n\n", sum);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int i, product;
    product=1;
    if(n==0)
        return 1;
    for(i=0;i<n;++i)
    {
        product = product*(n-i);
    }
    return product;
}
int combination(int n, int r)
{
  int k,j;
  k = (factorial(n-r))*(factorial(r));
  j = factorial(n);
  return j/k;
}
void print_space(int i, int n)
{
    int x;
    for(x=1;x<(n-i);++x)
    {
        printf(" ");
    }
}
int main()
{
    int row;
    printf("Enter the number of rows for the Pascal's triangle: ");
    scanf("%d", &row);
    int i,j;
    for(i=0;i<row;++i)
    {
        print_space(i, row);
        for(j=0;j<=i;++j)
        {
            printf("  %d", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}

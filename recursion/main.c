#include <stdio.h>

int mat1[50][50],mat2[50][50],i,j,k,f,m,g,mat3[50][50],p,q;
void get_multiple( int mat1[50][50], int mat2[50][50]);

int main()
{
    printf("Enter the number of rows and column in the matrix1 respectively: ");
    scanf("%d %d", &i, &j);
    printf("Enter the number of rows and column in the matrix2 respectively: ");
    scanf("%d %d", &f, &g);
    for(m=0;m<i;++m)
    {
    for(k=0;k<j;++k)
    {
        printf("\nEnter the value for element in matrix 1 [%d][%d]:    ", m, k);
        scanf("%d", &mat1[m][k]);
    }
    }
    printf("\n\n");
    for(m=0;m<f;++m)
    {
    for(k=0;k<g;++k)
    {
        printf("\nEnter the value for element in matrix 2 [%d][%d]:   ", m, k);
        scanf("%d", &mat2[m][k]);
    }
    }
    printf("\n\nThe entered matrices are: ");
    printf("\n\n");
    for(m=0;m<i;++m)
    {
        for(k=0;k<j;++k)
        {
            printf("  %d", mat1[m][k]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(m=0;m<f;++m)
    {
        for(k=0;k<g;++k)
        {
            printf("  %d", mat2[m][k]);
        }
        printf("\n");
    }
    if(j!=f)
    {
    printf("\n\nEntered matrices are invalid for multiplication!!!\n\n\n\n\n\n");
    return 0;
    }
    else
    {
        get_multiple(mat1,mat2);
       printf("\nThe matrix after multiplication is: ");
       printf("\n\n");
        for(p=0;p<i;++p)
        {
            for(q=0;q<g;++q)
            {
                printf("  %d", mat3[p][q]);
            }
            printf("\n");
        }
    }
    return 0;
}
void get_multiple(int mat1[50][50], int mat2[50][50])
{
  static int a=0,b=0,c=0,sum;
  if(a<i)
  {
      if(b<g)
      {
          if(c<j)
          {
              sum=sum + (mat1[a][c])*(mat2[c][b]);
              ++c;
              get_multiple(mat1,mat2);
          }
          mat3[a][b]=sum;
          sum=0;
          c=0;
          ++b;
          get_multiple(mat1,mat2);
      }
      b=0;
      ++a;
      get_multiple(mat1,mat2);
  }
}

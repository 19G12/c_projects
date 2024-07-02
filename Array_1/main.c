#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,n,j;
    float x[20],y[20];
    for(i=0;i<20;++i)
    {
     printf("Enter input values, input 0 to stop: ");
     scanf("%d", &n);
     if(n==0)
     {
         break;
     }
     else
     {
         x[i]=n;
     }
    }
    printf("\nThe number of entered values are: %d", i);
    for(j=0;j<i;++j)
    {
        if(j%2==0)
            y[j]=2*x[j];
        else
            y[j]=cbrt(x[j]);
    }
    printf("\n\n\n           Array_1           Array_2\n\n");
    for(j=0;j<i;++j)
    {
        printf("            %0.2f                 %0.2f\n", x[j], y[j]);
    }
    return 0;








}

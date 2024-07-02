

#include <stdio.h>
int max_arr(int *arr, int n)
{
    int i,j;
    i=*arr;
    for(j=0;j<n;++j)
    {
       if(i<*(arr+j))
        i=*(arr+j);
    }
    return i;
}
int min_arr(int *arr, int n)
{
     int i,j;
    i=*arr;
    for(j=0;j<n;++j)
    {
       if(i>*(arr+j))
        i=*(arr+j);
    }
    return i;
}
void sum_max_min(int a, int b, int *p)
{
    *p=a+b;
}
int main()
{
     int max,min,sum,i,n, arr[50];
     printf("Enter how many elements you want in an array: ");
     scanf("%d", &n);
     for (i=0;i<n;++i)
     {
         printf("\nEnter the value: ");
         scanf("%d", (arr+i));
     }
     max=max_arr(arr,n);
     min=min_arr(arr,n);
     sum_max_min(max,min,&sum);
     printf("\n\nTHE SUM OF MAX AND MIN VALUES OF ENTERED ARRAY IS %d\n\n\n", sum);
     return 0;
}

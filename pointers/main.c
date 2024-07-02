#include <stdio.h>
 int manipulate(int *p, int *q);
 int main()
 {
     int a, b, i;
     printf("Enter the values for the operants: ");
     scanf("%d %d", &a, &b);
     i = manipulate( &a, &b);
     printf("\nAfter the manipulations, the final result comes out to be %d\n\n\n", i);
     return 0;
 }
 int manipulate(int *p, int *q)
 {
     *p=*p-10;
     *q=*q+5;
     return (*p)*(*q);
 }

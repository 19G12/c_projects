#include <stdio.h>
int my_function(int a, int b, int c)
{
    int i,j=0;
    for(i=a;i<=b;++i)
    {
        if(i%c==0)
            j=i;
    }
    if(j==0)
        return 0;
    else
        return j;

}
int main()
{
    int a,b,c,i;
    printf("Enter the numbers respectively : ");
    scanf("%d %d %d", &a, &b, &c);
    i=my_function( a, b, c);
    printf("The number is %d", i);
    return 0;
}

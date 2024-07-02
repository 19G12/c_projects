#include <stdio.h>
void get_prog(int arr[8], int days)
{
    int i=1,j, left, right;
    int copy[8];
    while(i<=days)
    {
        for(j=0;j<8;++j)
        {
            if(j==0)
                left =0;
            else
                left=arr[j-1];
            if(j==7)
                right=0;
            else
                right=arr[j+1];
            if(right==left)
                copy[j]=0;
            else
                copy[j]=1;
        }
        for(j=0;j<8;++j)
        {
            arr[j]=copy[j];
        }
        printf("The situation for DAY %d is :\n", i);
        printf("[");
        for(j=0;j<8;++j)
        {
            printf(" %d|", arr[j]);
        }
        printf("]");
        printf("\n\n");
        ++i;
    }

}
int main()
{
    int arr[8]={ 1, 0, 1, 1, 0, 0, 1, 0};
    int days=4;
    get_prog(arr, days);
    return 0;
}

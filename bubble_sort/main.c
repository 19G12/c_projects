#include <stdio.h>
#include <stdlib.h>

void input_array(int *arr,int size);
void print_array(int *arr,int size);
void bubble_sort(int *arr,int size);

int main()
{
    int size;
    int *p;
    printf("Enter the number of elements to be entered: ");
    scanf("%d", &size);
    p = (int *)malloc(size*sizeof(int));
    input_array(p, size);
    printf("\n\nYour input array is: \t\t");
    print_array(p, size);
    bubble_sort(p, size);
    printf("\nAfter the sorting, the new array is: ");
    print_array(p, size);
    printf("\n\n");
    return 0;
}

void input_array(int *arr,int size)
{
    int i;
    for(i=0;i<size;++i)
    {
        printf("\nEnter the %dth term: ",i+1);
        scanf("%d", arr+i);
    }
}
void print_array(int *arr, int size)
{
    int i;
    for(i=0;i<size;++i)
    {
        printf("\t%d", *(arr+i));
    }
}
void bubble_sort(int *arr, int size)
{
    int i,j,buff;
    int counter =0;
    for(i=0;i<size-1 && !counter;++i)
    {
        counter = 1;
        for(j=0;j<size-1-i;++j)
        {
            if(*(arr+j) > *(arr+j+1))
            {
                buff = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = buff;
                counter = 0;
            }
        }
    }
}

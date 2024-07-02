#include <stdio.h>
void get_toh(int i , int source, int auxillary, int destination)
{
    if(i==1)
    {
        printf("-> Move the disc from %d to %d\n", source, destination);
        return;
    }
    get_toh(i-1, source,destination, auxillary);
    get_toh(1,source,auxillary,destination);
    get_toh(i-1, auxillary, source, destination);
}
int main()
{
    int number;
    printf("Enter how many discs you want to move in the Hanoi tower: ");
    scanf("%d", &number);
    printf("\n\n");
    get_toh(number,1,2,3);
    return 0;
}

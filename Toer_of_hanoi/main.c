#include <stdio.h>
#include <stdlib.h>

void tower_of_hanoi(int n, int source, int aux, int dest)
{
    if(n == 1)
    {
        printf("Move the disk from point %d to %d\n", source, dest);
        return;
    }
    tower_of_hanoi(n-1, source, dest, aux);
    tower_of_hanoi(1, source, aux, dest);
    tower_of_hanoi(n-1, aux, source, dest);
}
int main()
{

    printf("Follow the listed set of instructions: \n\n");
    tower_of_hanoi(3, 1, 2, 3);
    return 0;
}

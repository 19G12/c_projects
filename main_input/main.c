#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    if(argc == 1){
        printf("Insufficient input");
        return 0;
    }
    int i;
    double sum=0.0;
    for(i=1;i<argc;++i)
    {
        sum += atof(argv[i]);
    }
    printf("\n sum = %lf", sum);

    return sum;

}

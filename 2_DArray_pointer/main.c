#include <stdio.h>
#include <stdlib.h>

int ** pointer_input(int Rows, int Coulumns)
{
    int **p;
    int i;
    p = (int **)malloc(Rows*sizeof(int *));
    for(i=0;i<Rows;++i)
    {
        *(p+i)=(int *)malloc(Rows*sizeof(int));
    }
    return p;
}
void get_values(int **p, int rows, int columns)
{
    int i,j;
    for(i=0;i<rows;++i)
    {
        for(j=0;j<columns;++j)
        {
            printf("\nEnter the value for Row %d and Column %d: ", i, j);
            scanf("%d", (*(p+i)+j));
        }
    }
}
void print_values(int **p, int Rows, int Columns)
{
    int i,j;
    for(i=0;i<Rows;++i)
    {
        for(j=0;j<Columns;++j)
        {
            printf("  %d", *(*(p+i)+j));
        }
        printf("\n");
    }
}
void clear_data(int **p, int rows)
{
    int i;
    for(i=0;i<rows;++i)
    {
        free(*(p+i));
    }
}

int main()
{
    int **p;
    int Rows,Columns;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &Rows, &Columns);
    p=pointer_input(Rows,Columns);
    get_values(p,Rows,Columns);
    print_values(p,Rows,Columns);
    clear_data(p,Rows);
    return 0;
}

#include <stdio.h>
#define SIZE 150
int main()
{
    FILE *fp;
    fp=fopen("d:/file_handle/a.txt", "rb");
    if(fp==NULL){
     printf("Error");
     return 1;
    }
  //  double text[] = {22.61, 44.76, 35.89, 10.01, 11.70};
    //fwrite((void *)text, sizeof(double), 5, fp);
     double val;
    fseek(fp, 0L, SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fp);

    printf("2nd is %10.2lf", val);

    fclose(fp);
    return 0;
}

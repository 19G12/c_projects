#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
double sum(char *format, ...)
{
    double s=0;
    char c;
    va_list ap;
    va_start(ap, format);
    int i;
    for(i=0;i<strlen(format);++i)
    {
        c=format[i];
        switch(c)
        {
            case 'i': s += va_arg(ap, int);
                      break;

            case 'f': s += va_arg(ap, float);
                     break;

            case 'd': s += va_arg(ap, double);
                      break;

            default: printf("\nInvaid variable type declaration..");
                    exit(1);
        }

    }
    va_end(ap);
        return s;
}
int main()
{
    double s;
    s = sum("iidd", 21, 23, 20.6, 11.87);
    printf("\nThe sum of the entered numbers is %lf\n\n", s);
    return 0;
}

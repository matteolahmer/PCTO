#include <stdio.h>

int main()
{
    char a = '@';
    printf("%c\n", a);
    printf("%d\n", a);
    double x = 2.13;
    printf("%.2lf\n", x);
    float y = 1.1;
    printf("%.1f\n", y);
    short n = -4;
    printf("%d\n", n);
    printf("%c %d %.2lf %.1f %d\n", a,a,x,y,n);
    return(0);
}
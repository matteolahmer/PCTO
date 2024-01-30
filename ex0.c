#include <stdio.h>

int main()
{
    char a = '@';
    double x = 2.13;
    float y = 1.1;
    short n = -4;
    printf("%c\n", a);
    printf("%d\n", a);
    printf("%.2lf\n", x);
    printf("%.1f\n", y);
    printf("%d\n", n);
    printf("%c %d %.2lf %.1f %d\n", a,a,x,y,n);
    return(0);
}
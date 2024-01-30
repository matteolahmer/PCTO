#include <stdio.h>

int main()
{
    char c = '@';
    int i = 2;
    int ci = c*i;

    printf("Risultati:\n");
    printf("%d\n", ci);
    int n1 = 2;
    int n2 = 6;
    int n3 = n1+n2;

    printf("%d\n", n3);
    printf("%d\n", n1 + ci);
    char e = '&';
    double d = 2.1238;
    double ed = e/d;

    printf("%lf\n", ed);
    printf("%lf\n", ed - c);
    printf("\n\nOperazioni fatte:\n");
    printf("%d * %d = %d\n",c,i,ci);
    printf("%d + %d = %d\n",n1,n2,n3);
    printf("%d + %d = 130\n",n1,ci);
    printf("%d / %lf = %lf\n",e,d,ed);
    printf("%lf - %d = -46.107543\n",ed,c);
    int n4 = 20;
    int n5 = 6;
    int n6 = n4%n5;
    
    printf("\n\n>Resto della divisione: %d / %d =\n",n4,n5);
    printf("%d\n", n6);
    return(0);
}
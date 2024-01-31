#include <stdio.h>

int perimetro(int a, int b, int c)
{
    int perimetro = a + b + c;
    return(perimetro);
}
int area(int b, int h)
{
    int area = b * h / 2;
    return(area);
}



int main()
{
    int l1;
    int l2;
    int l3;

    printf("Inserisci il primo lato del triangolo:\n");
    scanf(" %d", &l1);
    printf("Inserisci il secondo lato del triangolo:\n");
    scanf(" %d", &l2);
    printf("Inserisci l'ultimo lato del triangolo:\n");
    scanf(" %d", &l3);
    int h = l1 * 1.7 / 2;
    perimetro(l1,l2,l3);
    area(l1,h);
    printf("Perimetro: %d\n", perimetro(l1,l2,l3));
    printf("Area: %d\n", area(l1,h));  
}
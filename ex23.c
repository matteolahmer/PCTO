#include <stdio.h>
#include <math.h>

int perimetro(int a, int b, int c)
{
    int perimetro = a + b + c;
    return(perimetro);
}
int area(int pm, int a, int b, int c)
{
    int area = pm / 2 * (pm / 2 - a) * (pm / 2 - b) * (pm / 2 - c);
    area = sqrt(area);
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
    if(l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2)
    {
        perimetro(l1,l2,l3);
        int pm = perimetro(l1,l2,l3);
        area(pm,l1,l2,l3);
        printf("Perimetro: %d\n", perimetro(l1,l2,l3));
        printf("Area: %d\n", area(pm,l1,l2,l3));  
    }
    else
    {
        printf("Questi 3 numeri non possono essere le lunghezze dei lati di un triangolo\n");
    }
}
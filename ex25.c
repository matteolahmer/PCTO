#include <stdio.h>

void calcolo(int n1, int n2)
{
    if(n1>n2)
    {
        printf("%d è più grande di %d\n", n1,n2);
    }
    else
    {
        printf("%d è più grande di %d\n", n2,n1);        
    }
}


int main ()
{
    int n1;
    int n2;

    printf("Inserisci un numero:\n");
    scanf(" %d", &n1);
    printf("Inserisci un altro numero:\n");
    scanf(" %d", &n2);
    calcolo(n1,n2);

}
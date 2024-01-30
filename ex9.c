#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    
    printf("Inserisci 3 numeri, invia uno alla volta\n");
    scanf(" %d",&n1);
    scanf(" %d",&n2);
    scanf(" %d",&n3); 
    if(n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2)
    {
        printf("Questi 3 numeri possono essere le lunghezze dei lati di un triangolo\n");
    } 
    else
    {
        printf("Questi 3 numeri non possono essere le lunghezze dei lati di un triangolo\n");
    }
    return(0);
}
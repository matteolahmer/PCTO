#include <stdio.h>

int main()
{
   int n1;
   int n2;
   char c;
   int risultato;
   printf("Inserisci un numero:\n");
   scanf(" %d", &n1);
   printf("\nInserisci un'operazione:\n");
   scanf(" %c", &c);
   printf("\nInserisci un altro numero:\n");
   scanf(" %d", &n2);
   if("c == +"){
    risultato = n1 + n2;
    printf("\nRisultato: %d\n", risultato);
   } else if ("c == -")
   {
    risultato = n1 - n2;
    printf("\nRisultato: %d\n", risultato);
   }
   


}





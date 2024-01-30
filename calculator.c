#include <stdio.h>

int main()
{
   int n1;
   int n2;
   char c;

   printf("Inserisci un numero:\n");
   scanf(" %d", &n1);
   printf("\nInserisci un'operazione:\n");
   scanf(" %c", &c);
   printf("\nInserisci un altro numero:\n");
   scanf(" %d", &n2);
   if(c == '+')
   {
      printf("\nRisultato: %d\n", n1 + n2);
   } 
   else if (c == '-')
   {
      printf("\nRisultato: %d\n", n1 - n2);
   } 
   else if (c == '*')
   {
      printf("\nRisultato: %d\n", n1 * n2);
   } 
   else if (c == '/')
   {
      printf("\nRisultato: %d\n", n1 / n2);
   } 
   else{
      printf("\nCarattere errato\n");
   }
   return(0);
}
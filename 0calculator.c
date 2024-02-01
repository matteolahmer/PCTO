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
   if (c == '^')
   {
      int volte; 
      printf("\nA quanto vuoi elevare il numero?\n");
      scanf(" %d", &volte);
      if (volte == 0 && n1 != 0)
      {
         printf("Risultato: 1\n");
      }
      else if ((volte == 0 && n1 == 0) || (volte != 0 && n1 == 0))
      {
         printf("Risultato: indefinito\n");
      }

      else if (volte < 0 )
      {
         volte = volte * -1;
         printf("Risultato: (1/%d)^%d\n", n1,volte);
      }
      else
      {
         int n1saver = n1;
         while(volte != 1 && volte > 0)
      {
         n1 = n1 * n1saver;
         volte = volte -1;
      }
      printf("Risultato: %d\n", n1);         
      }
   }
   else
   {
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
   }
   return(0);
}
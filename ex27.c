#include <stdio.h>

int main()
{
    char stringa[100];
    int x = 0;
    printf("Inserisci una parola:\n");
    scanf("%[^\n]%*c",stringa);
    while(stringa[x] != '\0')
    {
        if(stringa[x] >= 97 && stringa[x] <= 122)
        {
            stringa[x] = stringa[x] - 32;
        }
        x = x + 1;
    }
    printf("%s\n", stringa);
}
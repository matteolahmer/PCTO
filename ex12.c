#include <stdio.h>

int main()
{
    int x = 1;
    int y;
    
    while(x <= 100)
    {
        y = y + x;
        x = x + 1;
    }
    printf(" %d\n", y);
}

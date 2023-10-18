#include <stdio.h>

int main() 
{
    int i;

    for (i = 20; i >= 0; i -= 1)
    {
        printf("%d\n", i);
        i -= 2;
    }

    return 0;
}
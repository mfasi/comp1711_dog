#include <stdio.h>

int main () {
    int a = 2, b = 3;
    printf("a = %d, b = %d\n", a, b);
    
    // swap the two values.
    int temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
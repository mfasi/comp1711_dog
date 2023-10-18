#include <stdio.h>

int main () {
    int N = 1000;
    int array[1000];
    int i;

    for (i = 0; i < N+1; i++) {
        array[i] = 10 * i + i;
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
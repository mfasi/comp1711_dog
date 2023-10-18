#include <stdio.h>

int main () {
    int mark;
    printf("Input mark: ");
    scanf("%d", &mark);

    switch(mark >= 0 && mark <= 100 ? (mark >= 40 ? 0 : 1) : 2) {
        case 0:
            printf("Distniction");
            break;
        case 1:
            printf("Pass");
            break;
        case 2:
            printf("Outside of the range");
            break;
    }

    return 0;

    if (mark >= 40 && mark <= 100) {
        printf("%d is a pass\n", mark);
    } else if (mark >= 0 && mark < 40) {
        printf("%d is a fail\n", mark);
    } else {
        printf("Mark is not valid.\n");
    }
    return 0;
}
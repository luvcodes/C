#include <stdio.h>

int main(void) {
    int i = 0;
    // initialize; condition; increment
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
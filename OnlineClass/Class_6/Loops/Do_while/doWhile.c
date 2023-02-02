#include <stdio.h>

int main(void) {
    int i = 1;
    do {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);
    return 0;
}
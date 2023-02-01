#include <stdio.h>

int main(void) {
    int ch = 0;
    while ((ch = getchar()) != EOF) {
        if (ch < '0' || ch > '9') {
            continue;
        }
        putchar(ch);
        printf("\n");
    }
    return 0;
}
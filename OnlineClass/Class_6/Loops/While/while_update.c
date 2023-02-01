#include <stdio.h>

int main(void) {
//    int ch = getchar();
//    putchar(ch);
//    printf("%c\n", ch);

    int ch = 0;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}
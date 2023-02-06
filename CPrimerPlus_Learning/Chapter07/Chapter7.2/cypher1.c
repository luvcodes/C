#include <stdio.h>
#define SPACE ' '

int main(void) {
    char ch;
    ch = getchar();
    while (ch != '\n') { // while ((ch = getchar()) != '\n')
        if (ch == SPACE) {
            putchar(ch);
        }
        else {
            putchar(ch + 1); // example input A, in ASCII 65 + 1 = 66, output B
        }
        ch = getchar();
    }
    putchar(ch);

    return 0;
}
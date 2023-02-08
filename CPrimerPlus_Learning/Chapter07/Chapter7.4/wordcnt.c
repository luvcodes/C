#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void) {
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_line = 0;
    bool inword = false;
    printf("Enter text to be analyzed *|to terminate):\n");
    prev = '\n';
    while ((c = getchar()) != STOP) {
        n_chars++;
        if (c == '\n') {
            n_lines++;
            if (!isspace(c) && !inword) {
                inword = true;
                n_words++;
            }
            if (isspace(c) && inword) {
                inword = false;
                prev = c;
            }
        }
    }
}
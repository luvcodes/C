#include <stdio.h>
#define Q "His Hamlet was funny without being vulgar."

int main(void) {
    printf("He sold the painting for $%2.2f.\n", 2.345e2);
    printf("%c%c%c\n", 'H', 105, '\41');
    printf("%shas %d characters.\n", Q, strlen(Q));
    return 0;
}
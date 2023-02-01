#include <stdio.h>

int main(void) {
    int i = 1;
    while (i <= 100)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("%d\n");
    // Second method
    int a = 1;
    while (a <= 100) {
        printf("%d ", a);
        a += 2;
    }
    
    return 0;
}
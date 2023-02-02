#include <stdio.h>

int add(int x, int y) {
    int z = 0;
    z = x + y;
    return z;
}


int main(void) {
    int a = 10;
    int b = 20;
    int sum = add(a, b);
    printf("%d\n", sum); 
    return 0;
}
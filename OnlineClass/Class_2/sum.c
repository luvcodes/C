#include <stdio.h>

int Add(int x, int y) {
    int z = x + y;
    return z;
}

int main(void) {
    int num1 = 10;
    int num2 = 20;
    int sum = 0;
    sum = Add(num1, num2);
    printf("sum = %d\n", sum);

    return 0;
};
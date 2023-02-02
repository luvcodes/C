#include <stdio.h>

int main(void) {
    int x, y;
    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
        printf("hehe\n");
    }

    int i = 0;
    int k = 0;
    // 判断条件的k = 0，0为假，循环根本不进去
    for (i = 0, k = 0; k = 0; i++, k++) {
        k++;
    }

    return 0;
}
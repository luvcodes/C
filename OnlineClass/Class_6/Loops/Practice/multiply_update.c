#include <stdio.h>
int main(void) {
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    // 1! + 2! + 3! = 9
    for (n = 1; n <= 3; n++) {
        ret = ret * n;
        sum = sum + ret;
    }
    printf("sum = %d\n", sum);
    return 0;
}
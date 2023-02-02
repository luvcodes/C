#include <stdio.h>

int main(void) {
    int i = 0;
    int n = 0;
    int ret = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        ret = ret * i;
    }

    printf("ret = %d\n", ret);
    return 0;
}
#include <stdio.h>
/*
use while loop to get the sum of 1-100
*/
int main(void) {
    int num = 1;
    int sum = 0;
    while (num <= 100) {
        sum += num;
        num++;
    }
    printf("%d\n", sum);
    return 0;
}
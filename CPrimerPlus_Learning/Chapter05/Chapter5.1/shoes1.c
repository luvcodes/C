#include <stdio.h>
#define ADJUST 7.31
int main(void) {
    const double SCALE = 0.333; // 1st assign value
    double shoe, foot;
    shoe = 9.0; // size of shoe
    foot = SCALE * shoe +ADJUST; // foot represents foot length

    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot); // 占了10个位宽，1位小数，15个位宽，2位小数
    return 0;
}
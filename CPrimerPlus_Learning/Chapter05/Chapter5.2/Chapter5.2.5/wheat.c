#include <stdio.h>
#define SQUARES 64 // 棋牌中的方格数

int main(void) {
    const double CROP = 2E16; // 世界小麦年产谷粒数
    double current; // 表示当前格子中小麦的粒数
    double total; // 表示总的小麦的粒数

    int count = 1;

    printf("square grains total");
    printf("fraction of \n");
    printf("added grains");
    printf("world total\n");

    total = 1.0; // 从第一个格子中的小麦数是1.0
    current = 1.0; // 从1颗谷粒开始, 当前总数是1.0

    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    
    while (count < SQUARES) {

    }
}
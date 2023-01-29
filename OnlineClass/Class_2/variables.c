#include <stdio.h>
// 3. #define 定义的标识符常量
#define MAX 10

// 4. 枚举常量
// 枚举一一列举
enum SEX {
    MALE,
    FEMALE,
    BISECTUAL
};
enum COLOR {
    RED,
    BLUE,
    BLACK,
    WHITE
};
int main(void) {

    enum SEX s = FEMALE;
    printf("%d\n", s);

    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", BISECTUAL);
    printf("\n");
    printf("%d\n", RED);
    printf("%d\n", BLUE);
    printf("%d\n", BLACK);
    printf("%d\n", WHITE);

    return 0;
}
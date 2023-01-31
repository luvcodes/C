#include <stdio.h>

int main(void) {
    int a = 10;
//    printf("%p\n", &a); // 申请了4个字节的空间
    int* p = &a; // p is a variable, pointer variable, save the address of a into pointer variable p
//    printf("%p\n", p);
    *p = 20; // * - 解引用操作符/间接访问操作符
    printf("a = %d\n", a);
    return 0;
}
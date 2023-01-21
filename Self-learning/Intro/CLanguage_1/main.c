#include <stdio.h>

// char - 字符类型
// %d - 打印整型
// %c - 打印字符
// %f - 打印浮点数字 - 打小数
// %p - 以地址的形式打印
// %x - 打印16进制数字

// 局部变量的作用域是变量所在的局部范围
// 全局变量的作用于是整个工程

void test() {
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    scanf_s("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("sum = %d\n", sum);
}

//int main() {
//    test();
//    return 0;
//}

/*
 * 全局变量的作用域 以及 调用函数
 * */
//int global = 2020;
//
//void test () {
//    printf("test()-- %d\n", global);
//}
//
//int main() {
//    test();
//    printf("%d\n", global);
//    return 0;
//}



//int main() {
//    char ch = 'A';
//    printf("%c\n", ch); // %c -- 打印字符格式的数据
//
//    int age = 20;
//    printf("%d\n", age); // %d -- 打印整型十进制数据
//
//    long num = 100;
//    printf("%ld\n", num);
//
//    float f = 5.0;
//    printf("%f\n", f);
//
//    double d = 3.14;
//    printf("%lf\n", d);
//}



//int main() {
//    // 变量类型
//    printf("%llu\n", sizeof(char));
//    printf("%llu\n", sizeof(short));
//    printf("%llu\n", sizeof(int));
//    printf("%llu\n", sizeof(long));
//    printf("%llu\n", sizeof(long long));
//    printf("%llu\n", sizeof(float));
//    printf("%llu\n", sizeof(double));
//}



// 引入其他文件
//int main() {
//    extern int g_val;
//    printf("g_val = %d\n", g_val);
//
//    return 0;
//}
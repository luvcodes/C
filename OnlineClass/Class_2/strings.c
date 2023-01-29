#include <stdio.h>
#include <string.h>

int main(void) {
    // 数组，结尾隐藏了一个\0
    // "abc" -- 'a' 'b' 'c' '\0' -- '\0'字符串的结束标志
    // 字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候作为结束的标志，
    // 不作为字符串的内容。
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c'}; // 出现乱码, 'c'后面放的是随机值
    char arr3[] = {'a', 'b', 'c', '\0'};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%s\n", arr3);

    printf("%llu\n", strlen(arr1)); // 3
    printf("%llu\n", strlen(arr2)); // 随机值
    printf("%llu\n", strlen(arr3)); // 3
    return 0;
}
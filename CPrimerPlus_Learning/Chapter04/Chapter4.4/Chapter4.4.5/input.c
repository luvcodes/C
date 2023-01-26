#include <stdio.h>
int main(void) {
    int age;
    float assets;
    char pet[30]; // 字符数组，用于储存字符串
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets); // use &
    scanf("%s", pet); // char array does not use &
    printf("%d $%.2f %s\n", age, assets, pet);
    return 0;
}
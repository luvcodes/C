#include <stdio.h>

int main(void) {
    int ret = 0;
    int ch = 0;
    char password[20] = {0};
    printf("Please enter password: ");
    scanf("%s", password); // enter password and save into password array
    /*
     * 缓冲区还剩余一个'\n'
     * 读取一下'\n'
     * */
    while ((ch = getchar()) != '\n') {;}
    printf("Please confirm (Y/N):");
    ret = getchar(); // Y/N
    if (ret == 'Y') {
        printf("Confrimation success!");
    } else {
        printf("Failed to confirm!");
    }
//    printf("%d\n", '\n');
    return 0;
}
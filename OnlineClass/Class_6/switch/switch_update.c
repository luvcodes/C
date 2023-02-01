#include <stdio.h>

int main(void) {
    int day;
    scanf("%d", &day);
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Working day\n");
            break;
        case 6:
        case 7:
            printf("Break day\n");
            break;
        default:
            break;
    }
    return 0;
}
#include <stdio.h>
int main(void) {
    int age = 100;
    if (age < 18)
        printf("Non-adult\n");
    else {
        if (age >= 18 && age < 28)
            printf("Adult but young");
        else if (age >= 28 && age < 50)
            printf("Adult in middle age");
        else if (age >= 50 && age < 90)
            printf("Elderly");
        else
            printf("Too old");
    }
}
#include <stdio.h>

void pound(int n); // formal argument

int main(void) {
    int times = 5;
    char ch = '!'; // ASCII character is 33
    float f = 6.0f;
    pound(times); // integer type as parameter, actual argument
    pound(ch); // char type as parameter
    pound(f); // float type as parameter
    
    return 0;
}

void pound(int n) {
    while (n-- > 0) {
        printf("#");
        printf("\n");

    }
}
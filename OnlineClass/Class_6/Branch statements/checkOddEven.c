#include <stdio.h>

int main(void) {
    int num;
    scanf("Please enter your number: %d", &num);
    if (num % 2 == 0) 
    {
        printf("The number is a even number.\n");
    }
    else if (num % 2 == 1) {
        printf("The number is a odd number.\n");
    }
    else {
        printf("Invalid number");
    }
    
}
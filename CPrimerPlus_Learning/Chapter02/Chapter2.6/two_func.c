// C预处理器指令
#include <stdio.h>

// function prototype
void butler(void);

int main(void) {
    printf("I will summon the butler function.\n");
    butler(); // function call
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}


// function definition
void butler(void) {
    printf("You rang, sir?\n");
}
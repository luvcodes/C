#include <stdio.h>
int main(void) {
    int a = -2;
    int b = -a;
    printf("%d\n %d\n", a, b);

    int arr[10] = {0}; // 10 integer elements
    int sz = 0;
    printf("%d\n", sizeof(arr)); // 10 * sizeof(int) = 40
    // Calculate the number of elements in array
    // number = array length / sizeof each element
    sz = sizeof(arr) / sizeof(arr[0]);
    printf("sz = %d\n", sz);

    // int a = 10;
    // sizeof calculate the variable/type that cost the space, in digits
//    printf("%d\n", sizeof(a)); // 4
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof a);
//    printf("%d\n", sizeof int);


    return 0;
}
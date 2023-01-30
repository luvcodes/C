#include <stdio.h>
int main(void) {
    int arr[10]; // Define and store 10 integer elements in arr array
    int arr2[3] = {1,2,3}; // Define array
    int i = 0;
    while (i < 3) {
        printf("%d ", arr2[i]);
        i++;
    }
//    printf("%d\n", arr2[4]); // use index to access element

    return 0;
}
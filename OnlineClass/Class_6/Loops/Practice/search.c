#include <stdio.h>

int main(void) {
    // search 7 in the array
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < sz; i++) {
        if (k == arr[i]) {
            printf("Found it! Index is %d\n", i);
            break;
        }
    }
    if (i == sz) {
        printf("Cannot find it!\n");
    }

    return 0;
}
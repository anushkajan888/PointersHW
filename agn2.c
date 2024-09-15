#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) + 10;
    }

    printf("Modified array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }

    return 0;
}   

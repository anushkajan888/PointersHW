#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Address of num (using &num): %p\n", (void*)&num);
    printf("Address of num (using pointer ptr): %p\n", (void*)ptr);

    printf("Value of num (using *ptr): %d\n", *ptr);

    *ptr = 100;

    printf("New value of num (after modification through pointer): %d\n", num);

    return 0;
}


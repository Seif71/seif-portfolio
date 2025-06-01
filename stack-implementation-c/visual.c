#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *a = (int *)malloc(sizeof(int) * 4);
    int i;

    // Printing addresses
    printf("a is at %p\n", (void *)&a);
    printf("i is at %p\n", (void *)&i);
    printf("Array starts at %p\n", (void *)a);

    // Filling array
    for (i = 0; i < 4; i++) {
        a[i] = i * 2;
        printf("a[%d] is at %p, value = %d\n", i, (void *)&a[i], a[i]);
    }

    // Mark 1: Memory State After Allocation
    printf("\n--- Mark 1: Memory State After Allocation ---\n");
    printf("a (on stack) = %p, pointing to heap memory %p\n", (void *)&a, (void *)a);
    printf("Heap memory contains: [%d, %d, %d, %d]\n", a[0], a[1], a[2], a[3]);

    // Free memory
    free(a);

    // Mark 2: Memory State After Freeing
    printf("\n--- Mark 2: Memory State After Freeing ---\n");
    printf("a still holds address %p, but memory is freed\n", (void *)a);

    return 0;
}

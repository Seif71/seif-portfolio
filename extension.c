/**
 * 
 * extension 1
 * 
 * SeifEldin Abdelhamid 
 * 02/16/2025
 */ 

#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[4];
    int *p = (int *)(arr + 1); // Misaligned pointer
    *p = 42;  // Causes a bus error

    return 0;
}

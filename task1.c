/**
 * task 1
 *
 * SeifEldin Abdelhamid  
 * 02/02/2025
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    char c = 'S';
    short s = 2;
    int i = 2;
    long l = 76;
    float f = 3.14;
    double d = 3.147;

    
    void *vars[] = {&c,&s,&i,&l,&f,&d}; // Store addresses of variables
    size_t sizes[] = {sizeof(c), sizeof(s), sizeof(i), sizeof(l), sizeof(f), sizeof(d)}; // Store the size of variables
    const char *names [] = {"char", "short", "int", "long", "float", "double"}; // Store type names for printing

    for (int k = 0; k < 6; k++) {
        unsigned char *ptr = (unsigned char*) vars[k];  // Convert to byte pointer
        printf("%s:\n", names[k]);  // Print type name

        for (size_t j = 0; j < sizes[k]; j++) {  // Loop through bytes
            printf("%d: %02X\n", (int)j, ptr[j]);  // Print byte in hex
        }

        printf("\n");  // Add spacing between variables
    }
    
    return 0;
}
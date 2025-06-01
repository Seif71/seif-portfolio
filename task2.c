/**
 * task 2
 * 
 * SeifEldin Abdelhamid 
 * 02/02/2025
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Declare and initialize different types of variables
    int i = 3;                    // Integer variable
    char c = 'S';                 // Character variable
    double d = 3.1466776;         // Double floating point
    short s = 0x1234;             // Short integer 
    long l = 0x1234567890ABCDEF;  // Long integer 
    float f = 3.14f;              // Floating point number

    // Create a pointer to an unsigned char and assign it the address of itself
    unsigned char* pointer = (unsigned char*) &pointer;

    // Loop to print 101 bytes of memory starting from pointer's address
    for(i = 0; i <= 100; i++)
        printf("%d: %02X\n", i, pointer[i]); // Print byte index and its hexadecimal value

    return 0;
}
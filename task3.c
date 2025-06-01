/**
 * 
 * task 3
 * 
 * SeifEldin Abdlehamid 
 * 02/02/2025
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    for(;;){ // Infinite loop
        unsigned *ptr = malloc(100); // Allocate 100 bytes
        free(ptr); // Free allocated memory
    }
    
    
    return 0;
}
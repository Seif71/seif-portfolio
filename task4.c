/**
 * 
 * Task 4 
 * 
 * SeifEldin Abdelhamid 
 * 02/02/2025
 */

#include <stdio.h>
#include <stdlib.h>

struct NewStruct {
  char c;  // 1 byte
  short s; // 2 bytes
  int i;   // 4 bytes
};

int main() {
  struct NewStruct ns = {'A', 257, 123456789}; // Initialize struct
  unsigned char* ptr = (unsigned char*)&ns;

  ns.c = 'S';  // Assign 'S'
  ns.s = 2025;  // Assign -20
  ns.i = 8256;   // Assign 80

  printf("Memory layout of struct NewStruct:\n");
  for (int i = 0; i < sizeof(struct NewStruct); i++) {
    printf("%d: %02X\n", i, ptr[i]); // Print each byte in hex
  }

  return 0;
}
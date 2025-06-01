/**
 * SeifEldin Abdelhamid 
 * 
 * 03/31/2025
 * Ying Li 
 */

 #ifndef CSTK2HEADER
#define CSTK2HEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    void **data;
    void **top;
    int capacity;
} Stack;

// Function declarations (ONLY prototypes)
Stack *stk_create(int capacity);
void stk_destroy(Stack *stack);
int stk_size(Stack *stack);
void stk_push(Stack *stack, void *item);
void *stk_peek(Stack *stack);
void *stk_pop(Stack *stack);
char *stk_toString(Stack *stack, char *(*toString)(void *));

#endif

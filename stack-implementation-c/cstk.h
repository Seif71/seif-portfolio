/**
 * SeifEldin Abdelhamid 
 * 
 * 03/31/2025
 * Ying Li 
 */


#ifndef CSTK_H
#define CSTK_H

#include <stdio.h>
#include <stdlib.h>

// Stack structure definition
typedef struct Stack {
    int *data;    // Pointer to the start of the stack data
    int *top;     // Pointer to the next available position
    int capacity; // Maximum size of the stack
} Stack;

// Function declarations
Stack *stk_create(int capacity);
int stk_empty(Stack *s);
int stk_full(Stack *s);
void stk_push(Stack *s, int value);
int stk_peek(Stack *s);
int stk_pop(Stack *s);
void stk_display(Stack *s, int order);
void stk_destroy(Stack *s);
Stack *stk_copy(Stack *s);

#endif // CSTK_H

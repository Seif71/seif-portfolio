/**
 * SeifEldin Abdelhamid 
 * 
 * 03/31/2025
 * Ying Li 
 */

 #include "cstk.h"

// Create a stack with given capacity
Stack *stk_create(int capacity) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if (!s) return NULL;
    s->data = (int *)malloc(capacity * sizeof(int));
    if (!s->data) {
        free(s);
        return NULL;
    }
    s->top = s->data;
    s->capacity = capacity;
    return s;
}

// Check if stack is empty
int stk_empty(Stack *s) {
    return s->top == s->data;
}

// Check if stack is full
int stk_full(Stack *s) {
    return (s->top - s->data) >= s->capacity;
}

// Push a value onto the stack
void stk_push(Stack *s, int value) {
    if (stk_full(s)) {
        printf("Stack is full. Cannot push %d.\n", value);
        return;
    }
    *(s->top) = value;
    s->top++;
}

// Peek at the top value of the stack
int stk_peek(Stack *s) {
    if (stk_empty(s)) {
        printf("Stack is empty. Cannot peek.\n");
        return 0;
    }
    return *(s->top - 1);
}

// Pop the top value from the stack
int stk_pop(Stack *s) {
    if (stk_empty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return 0;
    }
    s->top--;
    return *(s->top);
}

// Display stack contents
void stk_display(Stack *s, int order) {
    if (stk_empty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    if (order == 1) { // Print in reverse order (LILO)
        for (int *ptr = s->data; ptr < s->top; ptr++) {
            printf("%d ", *ptr);
        }
    } else { // Print in original order (LIFO)
        for (int *ptr = s->top - 1; ptr >= s->data; ptr--) {
            printf("%d ", *ptr);
        }
    }
    printf("\n");
}

// Destroy the stack and free memory
void stk_destroy(Stack *s) {
    if (s) {
        free(s->data);
        free(s);
    }
}

// Copy the contents of one stack into another
Stack *stk_copy(Stack *s) {
    Stack *new_stack = stk_create(s->capacity);
    if (!new_stack) return NULL;
    for (int i = 0; i < (s->top - s->data); i++) {
        new_stack->data[i] = s->data[i];
    }
    new_stack->top = new_stack->data + (s->top - s->data);
    return new_stack;
}

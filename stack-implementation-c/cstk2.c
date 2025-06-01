/**
 * SeifEldin Abdelhamid 
 * 
 * 03/31/2025
 * Ying Li 
 */


 #include "cstk2.h"

// Function implementations
Stack *stk_create(int capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    if (!stack) return NULL;
    
    stack->data = (void **)malloc(capacity * sizeof(void *));
    if (!stack->data) {
        free(stack);
        return NULL;
    }
    
    stack->top = stack->data;
    stack->capacity = capacity;
    return stack;
}

void stk_destroy(Stack *stack) {
    if (stack) {
        free(stack->data);
        free(stack);
    }
}

int stk_size(Stack *stack) {
    return (int)(stack->top - stack->data);
}

void stk_push(Stack *stack, void *item) {
    if (stk_size(stack) >= stack->capacity) return;
    *(stack->top) = item;
    stack->top++;
}

void *stk_peek(Stack *stack) {
    if (stk_size(stack) == 0) return NULL;
    return *(stack->top - 1);
}

void *stk_pop(Stack *stack) {
    if (stk_size(stack) == 0) return NULL;
    stack->top--;
    return *(stack->top);
}

char *stk_toString(Stack *stack, char *(*toString)(void *)) {
    if (stk_size(stack) == 0) {
        char *emptyStr = (char *)malloc(3);
        strcpy(emptyStr, "[]");
        return emptyStr;
    }
    
    int estimatedSize = 64 * stk_size(stack);
    char *result = (char *)malloc(estimatedSize);
    if (!result) return NULL;
    
    strcpy(result, "[");
    for (int i = 0; i < stk_size(stack); i++) {
        char *itemStr = toString(stack->data[i]);
        int requiredSize = strlen(result) + strlen(itemStr) + 3;
        
        if (requiredSize > estimatedSize) {
            estimatedSize *= 2;
            result = (char *)realloc(result, estimatedSize);
        }
        
        strcat(result, itemStr);
        if (i < stk_size(stack) - 1) strcat(result, ", ");
        free(itemStr);
    }
    strcat(result, "]");
    return result;
}

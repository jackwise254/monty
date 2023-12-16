#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct {
    int stack[STACK_SIZE];
    int top;
} Stack;

void push(Stack *stack, int value) {
    if (stack->top == STACK_SIZE - 1) {
        fprintf(stderr, "stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->top++;
    stack->stack[stack->top] = value;
}

void pint(Stack *stack) {
    if (stack->top == -1) {
        fprintf(stderr, "can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }
    printf("%d\n", stack->stack[stack->top]);
}

int main() {
    Stack stack;
    stack.top = -1; // Initialize an empty stack

    // Example usage
    push(&stack, 1);
    pint(&stack);
    push(&stack, 2);
    pint(&stack);
    push(&stack, 3);
    pint(&stack);

    return 0;
}


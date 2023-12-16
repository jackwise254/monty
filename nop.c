#include <stdio.h>
#include <stdlib.h>

// Define the Stack structure
typedef struct {
    int stack[100];
    int top;
} Stack;

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (stack->top == 99) {
        fprintf(stderr, "stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->top++;
    stack->stack[stack->top] = value;
}

// Function to perform the nop operation
void nop() {
    // Does nothing
}

// Function to print the stack
void pall(Stack *stack) {
    for (int i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->stack[i]);
    }
}

int main() {
    // Initialize an empty stack
    Stack stack;
    stack.top = -1;

    // Example usage
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    pall(&stack);

    // Use nop (doesn't do anything)
    nop();

    // Print the stack again
    pall(&stack);

    return 0;
}


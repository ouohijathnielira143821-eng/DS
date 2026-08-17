/* 5. Find the power of a given number using a stack. */
#include <stdio.h>

#define MAX 50

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    int value;
    if (top == -1) {
        return -1;
    }
    value = stack[top];
    top--;
    return value;
}

int main() {
    int base, exponent, i;
    long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("This program only supports non-negative exponents.\n");
        return 0;
    }

    /* push 'base' onto the stack 'exponent' number of times */
    for (i = 0; i < exponent; i++) {
        push(base);
    }

    /* pop each value and multiply to compute base^exponent */
    while (top != -1) {
        result *= pop();
    }

    printf("%d ^ %d = %ld\n", base, exponent, result);

    return 0;
}

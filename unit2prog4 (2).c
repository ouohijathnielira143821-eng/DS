/* 4. Find the factorial of a given integer number using a stack. */
#include <stdio.h>

#define MAX 20

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
    int num, i;
    long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    /* push all numbers from 1 to num onto the stack */
    for (i = 1; i <= num; i++) {
        push(i);
    }

    /* pop each number and multiply to compute the factorial */
    while (top != -1) {
        fact *= pop();
    }

    printf("Factorial of %d = %ld\n", num, fact);

    return 0;
}

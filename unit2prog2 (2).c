/* 2. Find the factorial of a number using recursion (stack).
      Each recursive call is pushed onto the system call stack,
      and the calls are resolved (popped) as they return. */
#include <stdio.h>

long factorial(int n) {
    /* base case - bottom of the recursive call stack */
    if (n == 0 || n == 1) {
        return 1;
    }
    /* recursive case - pushes a new call onto the stack
       and multiplies once that call returns (is popped) */
    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %ld\n", num, factorial(num));
    }

    return 0;
}

/* 7. Find the Smallest Common Divisor of a given number.
      (i.e. the smallest divisor of the number that is greater
      than 1 - equivalently, its smallest prime factor.) */
#include <stdio.h>

int main() {
    int num, i, smallestDivisor = -1;

    printf("Enter a number (greater than 1): ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Number must be greater than 1.\n");
        return 0;
    }

    /* check divisors starting from 2 upward; the first one
       found is the smallest divisor greater than 1 */
    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            smallestDivisor = i;
            break;
        }
    }

    printf("Smallest divisor of %d (greater than 1) = %d\n", num, smallestDivisor);

    if (smallestDivisor == num) {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}

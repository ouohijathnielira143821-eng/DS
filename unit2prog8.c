/* 8. Find Minimum and Maximum numbers from the given array using Recursion. */
#include <stdio.h>

int findMax(int arr[], int n) {
    /* base case: only one element left */
    if (n == 1) {
        return arr[0];
    }
    /* compare last element with the max of the rest of the array */
    int maxRest = findMax(arr, n - 1);
    return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
}

int findMin(int arr[], int n) {
    /* base case: only one element left */
    if (n == 1) {
        return arr[0];
    }
    /* compare last element with the min of the rest of the array */
    int minRest = findMin(arr, n - 1);
    return (arr[n - 1] < minRest) ? arr[n - 1] : minRest;
}

int main() {
    int arr[10], n, i;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nMaximum element = %d\n", findMax(arr, n));
    printf("Minimum element = %d\n", findMin(arr, n));

    return 0;
}

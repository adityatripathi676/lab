#include<stdio.h>

int main() {
    int a[100], i, n, max, min;

    printf("Enter the size of an Array: ");
    scanf("%d", &n);

    // Initialize the array
    printf("Enter the elements of an Array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize max and min with the first element of the array
    max = min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d", min);

    return 0;
}

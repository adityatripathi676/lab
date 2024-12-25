#include<stdio.h>

int main() {
    int a[100], i, n, max1, max2, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array size should be at least 2 for finding two maximum values.\n");
        return 1;  // Return an error code
    }

    printf("Enter the elements of array \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max1 = a[0];
    max2 = a[1];

    if (max2 > max1) {
        temp = max2;
        max2 = max1;
        max1 = temp;
    }

    for (i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max2 = a[i];
        }
    }

    printf("1st Maximum Number: %d \n", max1);
    printf("2nd Maximum Value: %d", max2);

    return 0;
}

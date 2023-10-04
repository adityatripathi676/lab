#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces for formatting
        for (int j = 0; j < n - i - 1; j++) {
            printf("   ");
        }

        for (int j = 0; j <= i; j++) {
            // Calculate and print binomial coefficient
            int coef = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%6d", coef);
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for formatting
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print continuous numbers
        for (int j = 1; j <= i; j++) {
            printf("%2d  ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}

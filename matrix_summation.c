#include <stdio.h>

int main() {
    int a[100][100], b[100][100], sum[100][100];
    int i, j, row, col;

    printf("Enter the number of Rows: ");
    scanf("%d", &row);

    printf("Enter the Number of Columns: ");
    scanf("%d", &col);

    printf("Enter the elements of first Matrix: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second Matrix: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        } 
    }

    printf("Sum of Matrices are: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

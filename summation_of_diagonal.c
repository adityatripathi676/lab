#include<stdio.h>
int main() {
    int a[50][50],row,col,i,j,sum=0;
    printf("Enter the Number of rows :");
    scanf("%d",&row);
    printf("Enter the number of Columns: ");
    scanf("%d",&col);
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("The matrix entered is: \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i<row; i++) {
        for ( j = 0; j < col; j++)
        {
            if (i==j) {
                sum = sum + a[i][j];
            }
        }
        
    }
    printf("Sum is: %d \n",sum);
    return 0;
}
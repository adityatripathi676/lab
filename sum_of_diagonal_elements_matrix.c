#include<stdio.h>
int main() {
    int a[100][100],i,j,row,col,sum =0;
    printf("Enter the number of Rows: ");
    scanf("%d",&row);
    printf("Enter the Number of Column: ");
    scanf("%d",&col);
    printf("Enter the elements of Matrix \n");
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<row;i++){
        for (j=0;j <col; j++) {
            if (i==j) {
                sum =sum +a[i][j];
            }
        }
    }
    printf("Sum of Diagonals is %d",sum);
    
    return 0;
}
#include<stdio.h>
int main() {
    int n,i,j,flag = 0;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    for ( j = 2; j <= n; j++)
    {
        flag = 0;
        if (j == 2) {
            printf("%d \n",j);
        }
        else {
            for ( i=2;i<=j-1;i++) {
                if (j%i ==0) {
                    flag=1;
                    break;
                }
            }
            if (flag == 0) {
                printf("%d \n",j);
            }
        }
    }
    return 0;
}

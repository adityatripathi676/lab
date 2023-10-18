#include<stdio.h>
int main() {
    int i,j,n,k=1;
    printf ("Enter the value of N: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            if (k<10)
            {
                printf("  %d",k);
            }
            else if (k>9 && k< 100) {
                printf("  %d",k);
            }
            else {
                printf ("  %d",k);
            } 
            k=k+1;         
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
#include<math.h>
int main() {
    int i,n,c=0,s;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for ( i = 1; pow(2,i) <= n; i++)
    {
        c=c+1;
    }
    s=pow(2,c);
    printf("%d",s);

    return 0;
}
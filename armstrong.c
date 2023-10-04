#include<stdio.h>
#include<math.h>
int main() {
    int n,sum=0,temp,c=0,i,rem;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    temp = n;
    for ( i = n; i > 0; i=i/10)
    {
        rem = i%10;
        sum = sum + pow(rem,c);
    }
    if (sum == temp)
    {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }   
    return 0;
}
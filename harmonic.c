#include<stdio.h>
int main() {
    float n,i,t,sum=0;
    clrscr();
    printf("enter the value of N: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++);
    {
        t=1/(i*i);
        sum=sum+t;
    }
    printf("Sum of Harmonic Numbers is %f",sum);
    getch();
}
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i = 2; i <= n - i; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime Number");
    }
    else {
        printf("Not a Prime");
    }
    return 0;
}
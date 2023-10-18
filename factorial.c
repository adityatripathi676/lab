#include<stdio.h>
int main() {
    int a,b,c,ch;
    printf("1: Addition \n");
    printf("2: Substraction \n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Enter the Choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: c = a+b; 
        printf("c = %d",c);
        break;
    case 2: c = a-b; 
        printf("c = %d",c);
        break;
    case 3: c = a*b; 
        printf("c = %d",c);
        break;
    case 4: c = a/b; 
        printf("c = %d",c);
        break;
    default: 
    printf("Enter the choice between 1 - 4");
    }
    return 0;
}
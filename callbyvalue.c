#include<stdio.h>
#include<string.h>
void swap(int, int);
void main () {
    int a,b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    swap(a,b);
}

void swap(int x, int y) {
    int temp; 
    temp =x;
    x =y;
    y=temp;
    printf("Value of x and y after swapping a and b is: %d and %d",x,y);
}
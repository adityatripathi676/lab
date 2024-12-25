#include<stdio.h>
int main() {
    int a[100], i, n,flag=0,item;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    printf("Enter the elements of an array: ");
    for (i=0; i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements you want to search: ");
    scanf("%d",&item);
    for (i=0;i<n;i++) {
        if (a[i] == item) {
            flag =1;
            break;
        }
    }
    if (flag == 0) {
        printf("Item not found");
    }
    else {
        printf("Item found at %d",i+1);
    }
    return 0;
}
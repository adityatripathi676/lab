/* #include <stdio.h>

const int little = 6, medium = 10;

int main() {
    int k;
    int number[medium];

    for (k = 0; k < medium; k++)
        number[k] = k / 2;

    printf("Contents of the 'number' array:\n");
    for (k = 0; k < medium; k++) {
        printf("number[%d] = %d\n", k, number[k]);
    }

    return 0;
} */
/*
#include <stdio.h>

const int little = 6, medium = 10;

int main() {
    int k, number[medium];

    for (k = 0; k < little; k++)
        number[k] = k * k;

    for (k = little; k < medium; k++)
        number[k] = number[k - 5];

    // Print the contents of the 'number' array after the loops
    printf("Contents of the 'number' array after the loops:\n");
    for (k = 0; k < medium; k++) {
        printf("number[%d] = %d\n", k, number[k]);
    }

    return 0;
}
*/

// #include <stdio.h>

// const int medium = 10;

// int main() {
//     int k, number[medium];

//     number[0] = 1;
//     k = 1;

//     do {
//         number[k] = 2 * number[k - 1];
//         k++;
//     } while (k < medium);

//     // Print the contents of the 'number' array after the loop
//     printf("Contents of the 'number' array after the loop:\n");
//     for (k = 0; k < medium; k++) {
//         printf("number[%d] = %d\n", k, number[k]);
//     }

//     return 0;
// }



// Question 3: 

// #include <stdio.h>

// int main() {
//     int profit[6] = {150, 300, 500};
//     int a,b,c;
//     a = profit[3];
//     printf("a: n = %d\n", a);

//     b = profit[0];
//     printf("b: n = %d\n", b);

//     c = profit[6];
//     printf("c: n = %d\n", c);

//     return 0;
// }




// Question 4
#include <stdio.h>

int main() {
    int list[10] = {0};
    int k;

    for (k = 0; k < 5; k++)
        list[2 * k + 1] = k + 2;

    for (k = 0; k < 10; k++)
        printf("%4d\n", list[k]);

    return 0;
}
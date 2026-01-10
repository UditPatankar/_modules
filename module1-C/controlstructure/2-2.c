/* 3. Pyramid Pattern Printing
Create a program that prints the following pattern using nested "for
loops":
*
* *
* * *
* * * *
* * * * *

 */

#include <stdio.h>

void printPyramid();

int main() {

    printPyramid();
    return 0;
}

void printPyramid() {
    
    int n;
    printf("Size ? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

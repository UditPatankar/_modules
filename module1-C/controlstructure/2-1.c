#include <stdio.h>

void checkPrimeNum();
void multiplicationTable();

int main() {

    checkPrimeNum();
    multiplicationTable();
    return 0;
}

// 1.Prime Number Checker

void checkPrimeNum() {
    
    int x;
    printf("Enter the number to check: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d is not a prime number.\n", x);
        return;
    }

    for(int i = 2; i < x; i++) {
        if (x % i == 0) {
            printf("%d is not a prime number.", x);
            return;
        }
    }

    printf("%d is a prime number.", x);
    return;
}

// 2. Write a program that generates and displays the multiplication table for a
// number entered by the user using a for loop.

void multiplicationTable() {

    int x; 

    printf("\n\nEnter the number for table:");
    scanf("%d", &x);

    for (int i = 1; i <= 10; i++) {
        int multiple = x * i;
        printf("%d * %d = %d\n", x, i, multiple);
    }
}
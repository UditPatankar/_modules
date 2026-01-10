// Check prime number

#include <stdio.h>

int main() {

    int number, i, rem;

    if (scanf("%d", &number) != 1) return 1;

    if (number < 2) {
        printf("Not a prime.");
        return 0;
    }

    for (i = 2; i < number; i++) {
        rem = number % i;
        if (rem == 0) {
            printf("Not a prime");
            return 0;
        }   
    }

    printf("a prime");
    return 0;
}
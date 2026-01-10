// Print multiplication table

#include <stdio.h>

int main() {

    int number, product;
    if (scanf("%d", &number) != 1) return 1;

    for (int i = 1; i <= 10; i++) {
        product = i * number;
        printf("%d * %d = %d\n", i, number, product);
    }

    return 0;
}
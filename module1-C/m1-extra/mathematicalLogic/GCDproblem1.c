// GCD (Euclid’s method)

#include <stdio.h>

int main() {

    int a, b, r; 
    if (scanf("%d %d", &a, &b) != 2) return 1;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("%d", a);
    return 0;
}
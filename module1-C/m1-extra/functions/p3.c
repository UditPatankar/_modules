// - `gcd()`

#include <stdio.h>

int gcd(int a, int b);

int main() {
    
    int a, b; 

    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));

    return 0;
}

int gcd(int a, int b) {

    // int rem;
    // while( b != 0) {
    //     rem = a % b;
    //     a = b;
    //     b = rem;
    // }

    return (b == 0) ? a : gcd(b, a%b);
}
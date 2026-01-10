// Print all prime numbers in a range

#include <stdio.h>

int main() {
    
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 1;

    if (n < 2) n = 2;

    for (int i = n; i <= m; i++) {
        int isPrime = 1;

        for (int j = 2; j < i; j++) {
           
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d\n", i);
    }

    return 0;
}
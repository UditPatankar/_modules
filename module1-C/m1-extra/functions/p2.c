// - `isPrime()`

#include <stdio.h>

int isPrime(int n);

int main() {
    
    int n;
    scanf("%d", &n);

    if(isPrime(n))
        printf("Prime");
    else 
        printf("not Prime");

    return 0;
}

int isPrime(int n) {
    
    if(n <= 1) return 0;
    if(n <= 3) return 1;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
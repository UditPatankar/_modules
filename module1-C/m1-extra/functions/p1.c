// - `factorial()`

#include <stdio.h>

unsigned long long factorial(int n);

int main() {

    int n;
    unsigned long long fact;

    if((scanf("%d", &n)) != 1 || n < 0 || n > 20) {
        printf("please enter valid input between 0 and 20");
        return 1;
    };

    fact = factorial(n);
    printf("%d", fact);
    
    return 0;
}

unsigned long long factorial(int n) {

    unsigned long long fact = 1;
    for(int i = 1; i <= n; i++)  {
        fact *= i;
    }
    
    return fact;
}
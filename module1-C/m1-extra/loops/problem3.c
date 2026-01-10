// Count digits in a number

#include <stdio.h> 

int main() {

    long long num, n, i = 0;
    scanf("%d", &num);

    n = num;
    do {
        n = n / 10;
        i++;

    } while (n != 0);

    printf("%d", i);
    
    return 0;
}

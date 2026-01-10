// Calculate the sum of numbers from 1 to N using a for loop. 

#include <stdio.h>

void usingWHILE();
void usingFOR();

int main() {

    usingWHILE();
    usingFOR();
    
}

void usingWHILE() {

    int n;
    int i = 1;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i++;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
}

void usingFOR() {

    int n;
    int i = 1;
    int sum = 0;

    printf("\nEnter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
}
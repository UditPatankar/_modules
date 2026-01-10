// Print numbers from 1 to N

// input: a number(n)
// output: numbers from 1 to n 
// variables: i and n 
// logic: 
// 1. read the input
// 2. if input n is < 1, print Invalid input.
// 3. while i <= n increase i by one and print it.

#include <stdio.h> 

int main() {
    
    int n, i = 1;
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid Input");
        return 0;
    }
       
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

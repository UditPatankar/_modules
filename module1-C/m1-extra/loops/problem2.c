// Find sum of first N numbers

// input: a number n 
// output: sum of n numbers
// variables: n, sum, i
// logic: 
// 1. read the input 
// 2. initialize sum with 0 and i with 1
// 3. while i <= n, sum = sum + i and increase i by 1
//4. print sum

#include <stdio.h> 

int main() {
    
    int n, sum, i = 1;
    sum = 0;

    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }
    printf("%d", sum);

    return 0;
}
// Reverse a number

// input: a number
// output: reversed number
// variables: number, temp, rev, rem
// logic: 
// 1. read input number
// 2. initialize rev with 0 and temp with number
// 3. while temp is not eqauls to 0 
//     rem = temp%10
//     rev = (rev*10) + 10
//     temp = temp/10
// 4. print rev

#include <stdio.h> 

int main() {

    int number, temp, rem, rev = 0;
    scanf("%d", &number);

    temp = number;
    while (temp != 0) {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp / 10;
    }
    printf("%d", rev);

    return 0;
}
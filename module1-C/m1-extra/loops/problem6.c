// Check Armstrong number

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main() {

    long long number, temp, temp2, rem, sum, i = 0;
    scanf("%lld", &number);

    if (number < 0) 
        number = abs(number);

    else if (number == 0 || number < 10) {
        printf("Yes");
        return 0;
    }

    temp = number;
    
    // count the digits
    do {
        temp = temp/10;
        i++;

    } while (temp != 0);

    // get the sum
    temp2 = number;
    sum = 0;

    while (temp2 != 0) {
        rem = temp2 % 10;
        rem = pow(rem, i);
        sum = sum + rem;
        temp2 = temp2 / 10;
    }

    if (sum == number) 
        printf("Yes %lld", sum);
    else 
        printf("No %lld", sum);

    return 0;
}
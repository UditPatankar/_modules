// Check palindrome number

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

    if (rev == number) 
        printf("Yes");
    else 
        printf("No");

    return 0;
}
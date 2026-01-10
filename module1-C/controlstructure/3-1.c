/* Integrated Control Structures

Develop a menu-driven program that allows users to:
1. Check if a number is prime
2. Generate Fibonacci series upto n terms
3. Check if a number is palindrome
4. Exit the program

 */

 #include <stdio.h>

 void isNumPrime();
 void fabonacciSeries();
 void isNumPalindrome();


 int main() {

    int choice;
    printf("1. check for prime number\n");
    printf("2. print Fabonacci Series.\n");
    printf("3. check for palindrome.\n");
    printf("\nchoose the task: ");
    scanf("%d", &choice);

    if(choice > 3 || choice < 1) {
        printf("Invalid Option!");
        return 1;
    }

    switch(choice) {

        case 1: 
            isNumPrime();
            break;
        case 2: 
            fabonacciSeries();
            break;
        case 3: 
            isNumPalindrome();
            break;
        default:
            printf("Invalid Option");
            break;
    }

    return 0;
 }

 // Prime Number --------------
 void isNumPrime() {

    int x;
    printf("\nEnter number for prime check: ");
    scanf("%d", &x);

    if(x < 2) {
        printf("\t%d not a prime number", x);
        return;
    }

    for (int i = 2; i < x; i++) {
        if( x % i == 0) {
            printf("\t%d is not a prime number.", x);
            return;
        }
    }
    
    printf("\t%d is a prime number.", x);
    return;
 }

// Fibonacci Series-------------
 void fabonacciSeries() {

    int a = 0;
    int b= 1;
    int n, next;

    printf("\nDesired length of the Fabonacci Series: ");
    scanf("%d", &n);

    printf("0 1 ");
    for (int i = 3; i <= n ; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n\n");
 }

// Palindrome----------------
 void isNumPalindrome() {

    int number, rem, rev, temp;

    printf("Enter the number to verify: ");
    if(scanf("%d", &number) != 1) return;

    if(number < 0) {
        printf("Negative numbers are not palindromes");
        return;
    }
    else if(number == 0) {
        printf("%d is a palindrome", number);
        return;
    }
        

    temp = number;
    rev = 0;

    while (temp != 0) {

        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp / 10;
    }

    if (number == rev)     
        printf("%d is a plaindrome-\noriginal: %d\nreversed: %d", number, number, rev);
    else 
        printf("%d is not a plaindrome-\noriginal: %d\nreversed: %d", number, number, rev);

 }

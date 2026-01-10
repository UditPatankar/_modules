// - `isPalindrome()`

#include <stdio.h>

int isPalindrome(long long num);

int main() {
    
    long long num;
    scanf("%lld", &num);

    if(isPalindrome(num)) 
        printf("palindrome");
    else 
        printf("not palindrome");

    return 0;
}

int isPalindrome(long long num) {

    if(num < 0) return 0;

    long long rem = 1, rev = 0;
    long long temp = num;

    while(temp != 0) {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp/10;
    }

    //printf("%d", rev);
    return (rev == num) ? 1 : 0;
}
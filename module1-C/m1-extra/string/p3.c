// Check palindrome string

#include <stdio.h>

int main() {

    int count = 0;
    char s[50];

    scanf("%49s", s);

    while(s[count] != '\0') {
        count++;
    }

    for(int i = 0; i < count/2; i++) {

        if(s[i] != s[count-1-i]) {
            printf("Not Palindrome");
            return 0;
        }
    }

    printf("Palindrome");

    return 0;
}
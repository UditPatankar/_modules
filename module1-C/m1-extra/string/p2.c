// Reverse a string

#include <stdio.h>

int main() {

    int count = 0;
    char s[50];
    
    scanf("%49s", s);

    while(s[count] != '\0') {
        count++;
    }

    for(int i = 0; i < count/2; i++) {
        int temp = s[i];
        s[i] = s[count-1-i];
        s[count -1-i] = temp;
    }

    printf("%s", s);
    
    return 0;
}
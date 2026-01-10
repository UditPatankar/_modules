// Find length of string (without `strlen`)

#include <stdio.h>

int main() {

    char s[50];
    scanf("%49s", s);

    int count = 0;
    // for(int i = 0; s[i] != '\0'; i++) {
    //     count++;
    // }'
    
    while(s[count] != '\0') {
        count++;
    }
    
    printf("%d", count);
 
    return 0;
}
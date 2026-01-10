// Copy one string to another manually

#include <stdio.h>

int main() {

    int i = 0;
    char src[50];
    char dest[50];

    fgets(src, sizeof(src), stdin);
    
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    printf("%s", dest);

    return 0;
} 
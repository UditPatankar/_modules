// Count vowels, consonants, and spaces

#include <stdio.h>
#include <ctype.h>

int isvowel(char c);

int main() {

    int countVow = 0;
    int countCon = 0;
    int countSp = 0;
    char s[50];

    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++) {
        
        if(isalpha(s[i])) {

            //lower the character
            char ch = tolower(s[i]);

            if(isvowel(ch)) 
                countVow++;
            else 
                countCon++; 

        }
        
        else if(s[i] == ' ') {
            countSp++;
        }
    }

    printf("vowels: %d\nconsonants: %d\nspaces: %d", countVow, countCon, countSp);

    return 0;
}

int isvowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}
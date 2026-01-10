// Compare two strings (without `strcmp`)

#include <stdio.h>
#define MAX 50

void trim_newline(char s[]);

int main() {
    
    int i = 0;
    char s1[MAX];
    char s2[MAX];

    fgets(s1, MAX, stdin);
    fgets(s2, MAX, stdin);

    trim_newline(s1);
    trim_newline(s2);
    
    int i = 0;
    while(s1[i] == s2[i]) {
        if(s1[i] == '\0') {
            printf("1");
            return 0;
        }
        i++;
    }

    printf("0");

    return 0;
};

void trim_newline(char s[]) {
    int i  = 0;
    while(s[i] != '\0') {
        if(s[i] == '\n') {
            s[i] = '\0';
            break;
        } 
        i++;
    }
}

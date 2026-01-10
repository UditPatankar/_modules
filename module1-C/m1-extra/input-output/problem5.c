// Check whether a character is a vowel or consonant

// input: a character
// output: classify as vowel or consonant
// vaiable: character
// logic: 
// 1. read the input
// 2. Convert the input to lower-case
// 3. if character is equalt equal to  a, e, i, o or u, print vowel
// 4. else print consonant

#include <stdio.h>
#include <ctype.h>

int main() {

   char character;
   scanf("%c", &character);

   char ch = tolower(character);

   if (!isalpha(ch)) /// isalpha() returns 0 if ch is not alphabet
      printf("Invalid input!");

   else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      printf("vowel");

   else 
      printf("consonant");

   return 0;
}

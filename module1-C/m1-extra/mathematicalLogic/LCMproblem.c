// LCM (brute-force / trial method)

#include <stdio.h>

int main() {
   int a, b, max, temp;
   scanf("%d %d", &a, &b);

   max = a > b ? a : b;
   temp = max;

   while (1) {
      if (temp % a == 0 && temp % b== 0) {
         printf("%d", temp);
         break;
      }
      temp += max;
   }

   return 0;
}
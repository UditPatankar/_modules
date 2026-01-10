// Sum of digits of a number 

#include <stdio.h>

int main() {

   int digit, r, sum = 0;
   scanf("%d", &digit);

   while (digit != 0) {
      r = digit % 10;
      sum += r;
      digit = digit / 10;
   }

   printf("%d", sum);
   return 0;
}
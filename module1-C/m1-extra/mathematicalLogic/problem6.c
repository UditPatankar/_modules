// Power of a number (without using `pow`)

#include <stdio.h>

int main() {

   int base, exponent;
   long long p = 1;

   scanf("%d %d", &base, &exponent);

   for (int i = 0; i < exponent; i++) {
      p *= base;
   }

   printf("%d ^ %d = %lld", base, exponent, p);
   return 0;
}

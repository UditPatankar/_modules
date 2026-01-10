// LCM using GCD 

#include <stdio.h>

int main() {
   int a, b, p, r, gcd, lcm;
   scanf("%d %d", &a, &b);

   p = a * b;
   while (b != 0) {
      r = a % b;
      a = b;
      b = r;
   }

   gcd = a;
   lcm = p / gcd;
   printf("%d", lcm);

   return 0;
}
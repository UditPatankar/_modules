// Fibonacci series

#include <stdio.h>

int main() {

   int n,  a = 0, b = 1, x;
   scanf("%d", &n);
   
   if (n == 1) {
      printf("0");
      return 0;
   }
   if (n == 2) {
      printf("0 1");
      return 0;
   }

   printf("0 1");
   for (int i = 1; i <= n-2; i++) {
      x = a + b;
      a = b;
      b = x;
      printf(" %d", x);
   }

   return 0;
}
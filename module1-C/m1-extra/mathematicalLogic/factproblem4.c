// Factorial (using loop + function)

#include <stdio.h>

int factorial(int n);

int main() {

   int n;
   scanf("%d", &n);
   int fact = factorial(n);
     
   printf("%d", fact);
   return 0;
}

int factorial(int n) {

   int fact = 1;

   for (int i = 1; i <= n;i++) {
      fact *= i;
   }

   return fact;
}
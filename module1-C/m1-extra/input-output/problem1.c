// Read three numbers, print the larger

// ip: 3 numbers
// op: larger number
// variables: a,b,c 
// logic:
// 1. read a,b,c
// 2. if a>=b and a>=c, print a 
// 3. else if b>=a and b>=c, print b
// 4. else print c

#include <stdio.h> 

int main() {
   
   int a,b,c;

   scanf("%d %d %d", &a, &b, &c);

   if (a>=b && a>=c) 
      printf("%d", a);

   else if (b>=a && b>=c) 
      printf("%d", b);

   else 
      printf("%d", c);

   return 0;
}
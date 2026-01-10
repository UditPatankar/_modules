// check even or odd 

// input: a number
// output: even or odd 
// variable: a 
// logic: 
// 1. read the input a
// 2. if a is divisible by 2, print even
// 3. else print odd

#include <stdio.h> 

int main() {

   int a;

   scanf("%d", &a);

   if (a % 2 == 0) 
      printf("even");
   else 
      printf("odd");

   return 0;
}
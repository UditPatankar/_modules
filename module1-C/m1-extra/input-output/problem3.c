// check positive, negative and zero 

// input: a number 
// output: positive/ negative/ zero 
// variable: x 
// logic: 
// 1. read the input x
// 2. if x  is equal to zero, print zero
// 3. else if x < 0, print negative
// 4. else print positive

#include <stdio.h> 

int main() {

   int x;
   scanf("%d", &x);

   if (x == 0) 
      printf("zero");

   else if (x < 0) 
      printf("negative");

   else 
      printf("positive");

   return 0;
}
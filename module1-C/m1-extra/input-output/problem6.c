// Find grade from marks

// input: a number
// output: grade 
// variable: mark
// logic: 
// 1. read the input
// 2. compare the mark and print grade accordingly:
//    >= 90: A, >= 80: B....

#include <stdio.h>

int main() {

   int mark;
   scanf("%d", &mark);

   if (mark >= 90 && mark <= 100)
      printf("A");

   else if (mark >= 80)
      printf("B+");

   else if (mark >= 70) 
      printf("B");

   else if (mark >= 40)
      printf("C");

   else if (mark >= 0)
      printf("D");

   else 
      printf("Invalid input!");

   return 0;
}
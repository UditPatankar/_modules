// //Write a C program to find the LCM of two numbers.

// #include <stdio.h>

// int main() {

//    int a, b, max;

//    printf("Enter two numbers: ");
//    scanf("%d %d", &a, &b);

//    if(a <= 0 || b <= 0) {
//       printf("Please enter a positive integer!\n");
//       return 0;
//    }
   
//    max = a > b ? a : b;

//    while(1) {

//       if(max % a == 0 && max % b == 0) {
//          printf("\nLCM of %d and %d: %d", a, b, max);
//          break;
//       }
//       int increaseBy = a > b ? a : b;
//       max += increaseBy;
//    }

//    return 0;
// }

#include <stdio.h>

int main() {
   
   int a, b, max;
   
   printf("Enter numbers: ");
   scanf("%d %d", &a, &b);

   max = a > b ? a : b;

   while(1) {
      if(max % a == 0 && max % b == 0) {
         printf("LCM is: %d", max);
         break;
      }
      int increaseBy = a > b ? a : b;
      max += increaseBy;
   }
   return 0;
}
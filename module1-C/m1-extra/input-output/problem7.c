// Simple calculator using `switch`

// input:two number
// output: result (calculation)
// variables: num1, num2, sum, diff, prod, quo
// logic: 
// 1. read the input
// 2. provide choice to the user: 
//    0: +, 1: -, 2: *, 3: /
// 3. print the result

#include <stdio.h>

int main() {

   int num1, num2, choice, result;
   scanf("%d %d", &num1, &num2);

   printf("0: +\n1: -\n2: *\n3: /\n\tChoose the operation: ");
   scanf("%d", &choice);

   switch(choice) {

      case 0: 
         result = num1 + num2;
         break;

      case 1: 
         result = num1 - num2;
         break;
         
      case 2: 
         result = num1 * num2;
         break;
         
      case 3: 
         if (num2 == 0){
            printf("undefined!");
            return 0;
         }
         else {
            result = num1 / num2;
         }

         break; 
   }

   printf("%d", result);

   return 0;
}
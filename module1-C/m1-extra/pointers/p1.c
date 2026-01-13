// Swap two numbers using pointers

#include <stdio.h>

void swapValues(int *x, int *y) {

   int temp = *x;
   *x = *y;
   *y = temp;
}

int main() {
   
   int x;
   int y;

   printf("enter two numbers x and y: ");
   scanf("%d %d", &x, &y);

   swapValues(&x, &y);
   printf("value of x = %d and y = %d", x, y);
   
   return 0;
}
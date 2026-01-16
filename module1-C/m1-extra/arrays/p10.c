// **Row Sum**: Calculate and print the sum of each individual row.

#include <stdio.h>
#define MAX 100

int main() {
   
   int rows, cols, sum;
   int matrix[MAX][MAX];
   scanf("%d %d", &rows, &cols);

   if(rows < 1 || cols < 1 || rows > MAX || cols > MAX) {
      printf("Invalid size");
      return 1;
   }

   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   for(int i = 0; i < rows; i++) {
      sum = 0;
      for(int j = 0; j < cols; j++) {
         sum += matrix[i][j];
      }
      printf("%d\n", sum);
   }

   return 0;
}
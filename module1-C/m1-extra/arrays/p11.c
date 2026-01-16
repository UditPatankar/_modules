// **Column Sum**: Calculate and print the sum of each individual column.

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

   for(int r = 0; r < rows; r++) {
      for(int c = 0; c < cols; c++) {
         scanf("%d", &matrix[r][c]);
      }
   }

   for(int c = 0; c < cols; c++) {
      sum = 0;
      for(int r = 0; r < rows; r++) {
         sum += matrix[r][c];
      }
      printf("%d\n", sum);
   }

   return 0;
}
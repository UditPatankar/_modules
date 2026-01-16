// **Read and Print**: Read rows/cols and elements, then print the matrix row by row.

#include <stdio.h>
#define MAX 100

int main() {

   int rows, cols;
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
      for(int j = 0; j < cols; j++) {
         printf("%d ", matrix[i][j]);
      }
      printf("\n");
   }

   return 0;
}
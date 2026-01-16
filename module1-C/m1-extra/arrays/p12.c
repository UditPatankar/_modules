// **Transpose**: Convert rows into columns using `transpose[j][i] = matrix[i][j]`.

#include <stdio.h>
#define MAX 100

int main() {
   
   int rows, cols;
   int matrix[MAX][MAX];
   int transpose[MAX][MAX];
   
   if(scanf("%d %d", &rows, &cols) != 2) return 1;

   if (rows < 1 || cols < 1 || rows > MAX || cols > MAX) {
      printf("Invalid size");
      return 1;
   }

   // input original matrix
   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   // transpose logic
   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
         transpose[j][i] = matrix[i][j];
      }
   }

   for(int i = 0; i < cols; i++) {
      for(int j = 0; j < rows; j++) {
         printf("%d ", transpose[i][j]);
      }
      printf("\n");
   }

   return 0;
}
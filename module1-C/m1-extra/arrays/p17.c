// **Addition**: Sum two matrices of identical dimensions element-wise.

#include <stdio.h>
#define MAX 100

int main() {

   int rows, cols;
   int matrix1[MAX][MAX];
   int matrix2[MAX][MAX];
   int matrix3[MAX][MAX];
   if(scanf("%d %d", &rows, &cols) != 2) return 1;

   if (rows < 1 || cols < 1 || rows > MAX || cols > MAX) {
      printf("Invalid size");
      return 1;
   }

   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
         scanf("%d", &matrix1[i][j]);
      }
   }

   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
         scanf("%d", &matrix2[i][j]);
      }
   }

   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
         matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
         printf("%d ", matrix3[i][j]);
      }
      printf("\n");
   }   

   return 0;
}
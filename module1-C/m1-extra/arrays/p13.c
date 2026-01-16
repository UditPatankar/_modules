// **Square Check**: Determine if the number of rows equals the number of columns.

#include <stdio.h>
#define MAX 100

int main() {

   int rows, cols;
   int matrix[MAX][MAX];
   if(scanf("%d %d", &rows, &cols) != 2) return 1;

   if(rows < 1 || cols < 1 || rows > MAX || cols > MAX) {
      printf("Invlaid size!");
      return 1;
   }

   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < cols; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   if(rows == cols) 
      printf("Matrix is square.");
   else 
      printf("Matrix is not square.");

   return 0;
}
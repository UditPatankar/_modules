// **Primary Diagonal(squared matrix only**: Sum all elements where row index = column index.

#include <stdio.h>
#define MAX 100

int main() {

   int n, sum = 0;
   int matrix[MAX][MAX];
   if(scanf("%d", &n) != 1) return 1;

   if(n < 1 || n > MAX) {
      printf("Invlaid size!");
      return 1;
   }

   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   for(int i = 0; i < n; i++) {
      sum += matrix[i][i];
   }

   printf("%d", sum);

   return 0;
}
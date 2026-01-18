// **Multiplication**: Multiply two matrices if `cols1 == rows2`.

#include <stdio.h>
#define MAX 100

int main() {

   int rows1, cols1, rows2, cols2;
   int m1[MAX][MAX];
   int m2[MAX][MAX];
   int m3[MAX][MAX];

   if(scanf("%d %d", &rows1, &cols1) != 2) return 1;
   if(scanf("%d %d", &rows2, &cols2) != 2) return 1;

   if(cols1 != rows2 || rows1 > MAX || cols1 > MAX || rows2 > MAX || cols2 > MAX ) {
      printf("Invalid size!");
      return 1;
   }

   for(int i = 0; i < rows1; i++)
      for(int j = 0; j < cols1; j++)
         scanf("%d", &m1[i][j]);
   
   for(int i = 0; i < rows2; i++)
      for(int j = 0; j < cols2; j++)
         scanf("%d", &m2[i][j]);

   for(int i = 0; i < rows1; i++) { // for row of m1 and m3
      for(int j = 0; j < cols2; j++) { // for column of m2 and m3
         m3[i][j] = 0;
         
         for(int k = 0; k < cols1; k++) { // for column of m1
            m3[i][j] += m1[i][k] * m2[k][j];
         }
         printf("%d ", m3[i][j]);
      }
      printf("\n");
   }

   return 0;
}
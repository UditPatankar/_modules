// Read and print array elements

#include <stdio.h>
#define MAX 100

int main() {
   
   int n;
   int arr[MAX];
   scanf("%d", &n);

   if (n > MAX || n < 1) {
      printf("Invalid size");
      return 1;
   }

   for (int i = 0; i < n; i++) 
      scanf("%d", &arr[i]);

   for (int i = 0; i < n; i++) 
      printf("%d ", arr[i]);

   return 0; 
}
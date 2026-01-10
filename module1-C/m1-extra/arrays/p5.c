// Reverse an array

#include <stdio.h>
#define MAX 100

int main() {

   int n;
   int arr[MAX];
   scanf("%d", &n);

   if(n > MAX || n < 1) {
      printf("Invalid input");
      return 1;
   }

   for(int i = 0; i < n; i++) 
      scanf("%d", &arr[i]);

   for(int i = 0; i < n/2; i++) {
      int x = arr[i];
      arr[i] = arr[(n-1)-i];
      arr[(n-1)-i] = x;
   }

   for(int i = 0; i < n; i++) 
      printf("%d ", arr[i]);
   
   return 0;
}
// Find largest and smallest element

#include <stdio.h>
#define MAX 100

int main() {

   int n, min,max;
   int arr[MAX];
   scanf("%d", &n);

   if(n > MAX || n < 1) {
      printf("invalid input");
      return 1;
   }

   for(int i = 0; i < n; i++) 
      scanf("%d", &arr[i]);

   min = arr[0];
   max = arr[0];

   for(int i = 1; i < n; i++) {
      
      if(min > arr[i])
         min = arr[i];
      
      if(max < arr[i])
         max = arr[i];
   }

   printf("min: %d\nmax: %d", min, max);
   return 0;
}
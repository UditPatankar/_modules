// Sort array (Bubble sort only)

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
   
   for(int i = n-1; i > 0; i--) {
      
      for(int j = 0; j < i; j++) {

         if(arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }

   for(int i = 0; i < n; i++) 
      printf("%d ", arr[i]);

   return 0;
}
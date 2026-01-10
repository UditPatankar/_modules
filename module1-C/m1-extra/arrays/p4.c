// Count even and odd elements

#include <stdio.h>
#define MAX 100

int main() {
   
   int n, even = 0, odd = 0;
   int arr[MAX];
   scanf("%d", &n);

   if(n > MAX || n < 1) {
      printf("Invalid input");
      return 1;
   }

   for(int i = 0; i < n; i++) 
      scanf("%d", &arr[i]);

   for(int i = 0; i < n; i++) {
      
      if(arr[i] % 2 == 0) 
         even++;
      else 
         odd++;
   }

   printf("even: %d, odd: %d", even, odd);

   return 0;
}
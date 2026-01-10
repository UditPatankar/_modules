// Find sum and average of array elements

#include <stdio.h>
#define MAX 100

int main() {

   int n, sum = 0;
   int arr[MAX];

   scanf("%d", &n);
   
   if(n > MAX || n < 1) {
      printf("Invalid input");
      return 1;
   }

   for(int i = 0; i < n; i++)
      scanf("%d", &arr[i]);

   for(int i = 0; i < n; i++)
      sum += arr[i];

   float avg = (float)sum / n;

   printf("sum: %d, avg: %.1f", sum, avg);

   return 0;
}
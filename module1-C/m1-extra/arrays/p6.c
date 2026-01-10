// Linear search in array
#include <stdio.h>
#define MAX 100

int main() {
   
   int n, key;
   int arr[MAX];
   scanf("%d", &n);

   if(n > MAX || n < 1) {
      printf("Invalid input");
      return 1;
   }

   for(int i = 0;i < n; i++)
      scanf("%d", &arr[i]);
   
   scanf("%d", &key);
   
   for(int i = 0; i < n; i++) {
      if(arr[i] == key) {
         printf("%d", i);
         return 0;
      }
   }

   printf("-1");

   return 0;
}
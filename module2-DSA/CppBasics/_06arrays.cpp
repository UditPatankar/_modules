#include<bits/stdc++.h>
using namespace std;

int main() {

   // 1D array
   
   int arr[5];
   int index;
   
   cout << "Enter 5 elements: ";
   for(int i = 0; i < 5; i++) {
      cin >> arr[i];
   }

   cout << "enter index: ";
   cin >> index;
   cout << arr[index] << "\n";

   // 2D array

   int arr2[2][4];
   int el;

   cout << "enter elements for 2x4 matrix:\n";
   for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 4; j++) {
         cin >> arr2[i][j];
      }
   }

   cout << "what element coordinate you want? ";
   cin >> el;

   for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 4; j++) {
         if(el == arr2[i][j]) {
            cout << "coordinte " << i << "," << j;
            break;
         }
      }
   }

   return 0;
}

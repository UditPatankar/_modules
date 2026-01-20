/*
20:
   *        *
   **      **
   ***    ***
   ****  ****
   **********
   ****  ****
   ***    ***
   **      **
   *        *
*/
#include<iostream>
using namespace std;

void print_20(int n) {

   for(int i = 1; i <= n-1; i++) {

      if(i <= n/2) {
         for(int j = 1; j <= i; j++) {
            cout << "*";
         }
         for(int k = 1; k <= (n-2*i); k++) {
            cout << " ";
         }
         for(int j = 1; j <= i; j++) {
            cout << "*";
         }
         cout << "\n";   
      }
      else {
         for(int j = 1; j <= n-i; j++) {
            cout << "*";
         }
         for(int k = 1; k <=  2*i-n; k++) {
            cout << " ";
         }
         for(int j = 1; j <= n-i; j++) {
            cout << "*";
         }
         cout << "\n";
      }
   }
    
}

int main() {
    
    int n;
    cin >> n;
    print_20(n);

    return 0;
}
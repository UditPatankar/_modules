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

   for(int i = 1; i <= 2*n; i++) {

      int stars = i;
      if(i > n) stars = 2*n-i;

      int spaces = 2*(n-i);
      if(i > n) spaces = 2*(i-n);

      for(int j = 1; j <= stars; j++) cout << "*";

      for(int k = 1; k <= spaces; k++) cout << " ";
         
      for(int j = 1; j <= stars; j++) cout << "*";

      cout << "\n";
   }
}

int main() {
    
    int n;
    cin >> n;
    print_20(n);

    return 0;
}
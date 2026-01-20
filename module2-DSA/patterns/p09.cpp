/*
09:
      *
     ***
    *****
   *******
  *********
  *********
   *******
    *****
     ***
      *
*/
#include<iostream>
using namespace std;

void print_09(int n) {

      // upper
      for(int i = 1; i <= (n/2); i++) {
            
            //space
            for(int j = 0; j < (n/2)-i; j++) {
                  cout << " ";
            }
            //star
            for(int k = 0; k < (2*i)-1; k++) {
                  cout << "*";
            }
            //space
            for(int j = 0; j < (n/2)-i; j++) {
                  cout << " ";
            }
            cout << "\n";
      }
      // lower
      for(int i = 1; i <= (n/2); i++) {
            
            //space
            for(int j = 0; j < i-1; j++) {
                  cout << " ";
            }
            //star
            for(int k = 0; k < n-((2*i)-1); k++) {
                  cout << "*";
            }
            //space
            for(int j = 0; j < i-1; j++) {
                  cout << " ";
            }
            cout << "\n";
      }
}

int main() {

      int n;
      cin >> n;
      if(n < 4) return 1;
      print_09(n);

      return 0;
}
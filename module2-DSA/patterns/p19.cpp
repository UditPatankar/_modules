/*
19:
   **********
   ****  ****
   ***    ***
   **      **
   *        *
   *        *
   **      **
   ***    ***
   ****  ****
   **********
*/
#include<iostream>
using namespace std;

void print_19(int n) {

    for(int i = 1; i <= n/2; i++) {

        for(int j = 1; j <= ((n/2)+1-i); j++) {
            cout << "*";
        }
        for(int k = 1; k <= (2*i)-2; k++) {
            cout << " ";
        }
        for(int j = 1; j <= ((n/2)+1-i); j++) {
            cout << "*";
        }
        cout << "\n";   
    }
    for(int i = 1; i <= n/2; i++) {

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int k = 1; k <= n-2*i; k++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
}

int main() {
    
    int n;
    cin >> n;
    print_19(n);

    return 0;
}
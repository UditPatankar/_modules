/*
10:
   *
   **
   ***
   ****
   *****
   ****
   ***
   **
   *
*/
#include<iostream>
using namespace std;

void print_10(int n) {
    
    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
    
    for(int i = 1; i <= n-1; i++) {
        
        for(int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        for(int j = 1; j <=i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
}

int main() {

    int n;
    cin >> n;
    print_10(n);

    return 0;
}
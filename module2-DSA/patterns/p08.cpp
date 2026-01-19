/*
08:
    *********
     *******
      *****
       ***
        *
*/
#include<iostream>
using namespace std;

void print_08(int n) {
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (2*n)-(2*i-1); k++) {
            cout << "*";
        }
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_08(n);

    return 0;
}
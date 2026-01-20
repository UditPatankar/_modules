/*
12:
   1      1
   12    21
   123  321
   12344321
*/
#include<iostream>
using namespace std;

void print_12(int n) {

    for(int i = 1; i <= n; i++) {
        
        //left
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        for(int k = 1; k <= n-i; k++) {
            cout << " ";
        }
        //right
        for(int k = 1; k <= n-i; k++) {
            cout << " ";
        }
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << "\n";
    }
}

int main() {

    int n;
    cin >> n;
    print_12(n);

    return 0;
}
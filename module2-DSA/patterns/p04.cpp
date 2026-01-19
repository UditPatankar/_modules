/*
04:
    1
    22
    333
    4444
    55555
*/
#include<iostream>
using namespace std;

void print_04(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i; 
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_04(n);

    return 0;
}
/*
18:
   E
   D E
   C D E
   B C D E
   A B C D E
*/
#include<iostream>
using namespace std;

void print_18(int n) {

    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= i; j++) {
            char ch = (65+(n-1))-(i-j);
            cout << ch << " ";
        }
        cout << "\n";
    }
}

int main() {

    int n;
    cin >> n;
    print_18(n);
    
    return 0;
}
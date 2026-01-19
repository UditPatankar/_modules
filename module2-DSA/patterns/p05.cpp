/*
05: 
    *****
    ****
    ***
    **
    *
*/
#include<iostream>
using namespace std;

void print_05(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n+1)-i; j++) {
            cout << "*"; 
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_05(n);

    return 0;
}
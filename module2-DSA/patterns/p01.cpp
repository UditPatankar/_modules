/*
    01: 
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * * 
*/
#include<iostream>
using namespace std;

void print_01(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "* "; 
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_01(n);

    return 0;
}
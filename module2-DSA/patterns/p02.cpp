/*
    02:
    *
    * *
    * * *
    * * * *
    * * * * *
*/
#include<iostream>
using namespace std;

void print_02(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* "; 
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_02(n);

    return 0;
}
/*
14:
   A
   AB
   ABC
   ABCD
   ABCDE
*/
#include<iostream>
using namespace std;

void print_14(int n) {
    
    for(int i = 1; i <= n; i++) {
        char ch = 65;
        for(int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
}

int main() {

    int n;
    cin >> n;
    print_14(n);

    return 0;
}
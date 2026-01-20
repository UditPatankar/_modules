/*
15:
   ABCDE
   ABCD
   ABC
   AB
   A
*/
#include<iostream>
using namespace std;

void print_15(int n) {
    
    for(int i = 1; i <= n; i++) {
        char ch = 65;
        for(int j = 1; j <= (n+1)-i; j++) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_15(n);

    return 0;
}
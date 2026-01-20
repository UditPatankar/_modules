/*
16:
   A
   BB
   CCC
   DDDD
   EEEEE
*/
#include<iostream>
using namespace std;

void print_16(int n) {

    char ch = 65;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch;
        }
        ch++;
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_16(n);

    return 0;
}
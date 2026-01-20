/*
17:
     A
    ABA
   ABCBA
  ABCDCBA
*/
#include<iostream>
using namespace std;

void print_17(int n) {

    char ch2 = 65;
    for(int i = 1; i <= n; i++) {
        char ch = 65;

        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << ch;
            ch++;
        }
        for(int k = 1; k <= i-1; k++) {
            char ch2 = 'A' + (i-k-1);
            cout << ch2;
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    print_17(n);

    return 0;
}
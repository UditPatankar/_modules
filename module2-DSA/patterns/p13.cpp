/*
13:
   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
*/
#include<iostream>
using namespace std;

void print_13(int n) {
    
    int num = 1;

    for(int i =1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
}

int main() {

    int n;
    cin >> n;
    print_13(n);

    return 0;
}
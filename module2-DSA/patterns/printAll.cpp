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
void print_02(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* "; 
        }
        cout << "\n";
    }
}
void print_03(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " "; 
        }
        cout << "\n";
    }
}
void print_04(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i; 
        }
        cout << "\n";
    }
}
void print_05(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n+1)-i; j++) {
            cout << "*"; 
        }
        cout << "\n";
    }
}
void print_06(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n+1)-i; j++) {
            cout << j; 
        }
        cout << "\n";
    }
}
void print_07(int n) {
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n-i; j++) {
            cout << " "; 
        }
        for(int k = 1; k <= (2*i)-1; k++) {
            cout << "*";
        }
        for(int j = 1; j <= n-i; j++) {
            cout << " "; 
        }
        cout << "\n";
    }
}
void print_08(int n) {
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (2*n)-(2*i-1); k++) {
            cout << "*";
        }
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;
    
    cout << "\n";
    print_01(n);
    cout << "\n";
    print_02(n);
    cout << "\n";
    print_03(n);
    cout << "\n";
    print_04(n);
    cout << "\n";
    print_05(n);
    cout << "\n";
    print_06(n);
    cout << "\n";
    print_07(n);
    cout << "\n";
    print_08(n);

    return 0;
}
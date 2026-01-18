#include<bits/stdc++.h>
using namespace std;

// pass by reference
void addFive(int &a) {
   a += 5;
   cout << a << "\n";
}

int main() {

   int x = 10;
   addFive(x);
   cout << x;

   return 0;
}
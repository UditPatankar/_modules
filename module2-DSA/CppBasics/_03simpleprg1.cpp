// Write a program tothat takes input of age 
// and prints if you are adult or not

#include<bits/stdc++.h>
using namespace std;

int main() {
   
   int age;
   cin >> age;

   cout << ((age >= 18) ? "You are adult!" : "You are not adult!");
   
   return 0;
}
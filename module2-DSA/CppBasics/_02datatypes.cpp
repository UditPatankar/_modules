#include<bits/stdc++.h>
using namespace std;

int main() {
   
   // integer : 
   int x = 10; // -10^9 to 10^9
   long y = 220000; // -10^12 to 10^12
   long long z = 250000000LL; // -10^18 to 10^18

   // decimal
   float a = 2.5f;
   double b = 2.006305;
   
   // string 
   string name, surname, str;
   
   cin >> name >> surname;
   cout << "Hey " << name << " " << surname << "\n";
   
   cin.ignore(); // clear the buffer

   getline(cin, str);
   cout << str << "\n";

   // char
   char ch;
   cin >> ch;
   cout << ch;
   
   return 0;
}
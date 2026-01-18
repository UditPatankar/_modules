#include<bits/stdc++.h>
using namespace std;

int main() {

   int age;
   cin >> age;

   if(age < 18)
      cout << "not eligible for job.";

   else if(age <= 57) {
      cout << "eligible for job";
      
      // age bw 55 and 57 inclusive
      if(age >= 55) {   
         cout << ", but retirement soon";
      }
   }

   else // age > 57
      cout << "retiremet time";

   return 0;
}
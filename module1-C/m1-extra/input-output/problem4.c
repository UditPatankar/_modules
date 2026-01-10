// Check whether a year is a leap year.
   // Every 4th year is a leap year
   // BUT every 100th year is NOT
   // BUT every 400th year IS again

// input: a number(year)
// output: classify as leap or not a leap year
// variable: y
// logic: 
// 1. read the input year
// 2. if year is divisible by 400, print leap year
// 3. else if year is divisible by 100, print not a leap year
// 4. else if year is divisible by 4, print leap year
// 5. else, print not a leap year. 

#include <stdio.h> 

int main() {

   int year;
   scanf("%d", &year);

   if (year % 400 == 0) 
      printf("Leap Year");
   
   else if (year % 100 == 0)
      printf("Not a leap year");

   else if (year % 4 == 0) 
      printf("Leap Year");

   else 
      printf("Not a leap year");

   return 0;
}

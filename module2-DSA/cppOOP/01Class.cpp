#include <iostream>
#include <vector>
using namespace std;

class Point {
   public: 
   int x; 
   int y;
};

int main() {

   // points are: 
      // (0, 1)
      // (2, 2)
      // (2, 3)
      // (3, 4)
      // (4, 5)

   // class -> object (instantiation)
   Point points[5];
   
   points[0].x = 0;
   points[0].y = 1;

   points[1].x = 2;
   points[1].y = 2;

   points[2].x = 2;
   points[2].y = 3;
   
   points[3].x = 3;
   points[3].y = 4;

   points[4].x = 4;
   points[4].y = 5;

   for(int i = 0; i < 5; i++) {
      cout << "(" << points[i].x << " " << points[i].y << ")" << endl;
   }

   cout << endl; 

   // using vector
   vector<Point> vp = { {0, 1}, {2, 2}, {2, 3}, {3, 4}, {4, 5} };

   // const: This ensures read-only access
   // auto&: prevents the program from making a copy of each point as it loops
   for(const auto& point : vp) {  
      cout << "(" << point.x << " " << point.y << ")" << endl;
   }

   return 0;
}
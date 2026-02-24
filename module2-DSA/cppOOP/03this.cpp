#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Point {
   public: 
   int x; 
   int y;

   // methods -
   void print() const {
      cout << "(" << x << ", " << y << ")" << endl;
   }

   double distanceTo(const Point& other) const {
      int xDiff = x - other.x;
      int yDiff = y - other.y;
      return sqrt(xDiff * xDiff + yDiff * yDiff);
   }

   // constructor -
   Point() { 
        // Default constructor w/o any params
    }

   // using "this" keyword. (in some cases it can be LESS EFFICIENT)
   Point( int x, int y ) {
      this -> x = x; // (this): pointing to this object
      this -> y = y; // this->y is same as (*this).y
   }

   // Member Initializer List : MODERN WAY
   Point(int x, int y) : x(x), y(y) {
        // this -> here variables are initialized with junk first then, gets assigned with the correct value
        // using Initializer list the variables get created with correct value immediately.
   }
};

int main() {

   vector<Point> points = { {0, 1}, {2, 2}, {2, 3}, {3, 4}, {4, 5} };

   for(int i = 0; i < points.size(); i++) {
      points[i].print();
      if(i == points.size() - 1){
         cout << "You have reached the destination!";
         break;
      } 
      cout << "Distance to next point: " << points[i].distanceTo(points[i + 1]) << endl;
   }

   Point p; // This would invoke constructor wiithout parameters. 

   return 0;
}
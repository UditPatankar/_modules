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
};

int main() {

   // points are: 
      // (0, 1)
      // (2, 2)
      // (2, 3)
      // (3, 4)
      // (4, 5)

   vector<Point> points = { {0, 1}, {2, 2}, {2, 3}, {3, 4}, {4, 5} };

   // for(const auto& point : points) {
   //    point.print(); 
   // }

   for(int i = 0; i < points.size(); i++) {
      points[i].print();
      if(i == points.size() - 1){
         cout << "You have reached the destination!";
         break;
      } 
      cout << "Distance to next point: " << points[i].distanceTo(points[i + 1]) << endl;
   }

   return 0;
}
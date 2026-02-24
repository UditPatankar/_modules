#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Point {
    private:
        int x; 
        int y;

    public:
        void print() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }

        double distanceTo(const Point& other) const {
            int xDiff = x - other.x;
            int yDiff = y - other.y;
            return sqrt(xDiff * xDiff + yDiff * yDiff);
        }

    Point(int x, int y) : x(x), y(y) {}

    // Static method/members: 
        // the one that you want to attach with the class and not object, i.e., not specific to the object.
    static void printPoints(const vector<Point>& points) {
        cout << "We are going to print " << points.size() << " points" << endl;
        for(const auto& point : points) {
            point.print();
        }
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

    Point::printPoints(points); // Invoke it by the class name (Point::)

    /* 
    for(int i = 0; i < points.size(); i++) {
        points[i].print();
        if(i == points.size() - 1){
            cout << "You have reached the destination!";
            break;
        } 
        cout << "Distance to next point: " << points[i].distanceTo(points[i + 1]) << endl;
    }
    */

   return 0;
}
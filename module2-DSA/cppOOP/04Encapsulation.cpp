#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// struct: Members are public by default.
// class: Members are private by default. 

class Point {
    private:
        int x; 
        int y;

    public:
        int getX() { return x; }
        void setX(int newX) { x = newX; }

        int getY() { return y; }
        void setY(int newY) { y = newY; }

        void print() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }

        double distanceTo(const Point& other) const {
            int xDiff = x - other.x;
            int yDiff = y - other.y;
            return sqrt(xDiff * xDiff + yDiff * yDiff);
        }

    Point() {}  // #1
    Point(int x, int y) : x(x), y(y) {} // #2
};

int main() {

   // points are: 
      // (0, 1)
      // (2, 2)
      // (2, 3)
      // (3, 4)
      // (4, 5)

    // this would invoke #2
    vector<Point> points = { {0, 1}, {2, 2}, {2, 3}, {3, 4}, {4, 5} };

    for(int i = 0; i < points.size(); i++) {
        points[i].print();
        if(i == points.size() - 1){
            cout << "You have reached the destination!";
            break;
        } 
        cout << "Distance to next point: " << points[i].distanceTo(points[i + 1]) << endl;
    }

    // this would invoke #1
    Point p;
    p.setX(10);
    p.setY(30);
    cout << "\nPoint p: " <<  p.getX() + p.getY() << endl;
    // cout << p.x; won't work coz the data is private and can only be accessed using methods

   return 0;
}
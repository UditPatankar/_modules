#include <iostream>
#include <cmath>
using namespace std;

class Point {
    protected:
        int x;
        int y;

    public: 
        int getX() const {return x;} // need to use "const" keyword on methods that you want to call on "const references"
        void setX(int newX) {x = newX;}

        int getY() const {return y;}
        void setY(int newY) {y = newY;} // we almost never use "const" on set methods

        void print() const {
            cout << "(" << x << "," << y << ")" << endl;
        }
        double distanceTo(const Point& other) const {
            int xDiff = x - other.x;
            int yDiff = y - other.y;
            return sqrt(xDiff * xDiff + yDiff * yDiff);
        }
    
        Point() : x(0), y(0) {}
        Point(int x, int y) : x(x), y(y) {}
};

class XYZPoint : public Point {
    private:
        int z;
    
    public: 
        XYZPoint(int x, int y, int z): Point(x, y), z(z) {}
        void print() {
            // Point::print(); // calling the print method of the parent class
            cout << "(" << x << "," << y << "," << z << ")" << endl; // we can directly access the protected members of the parent class
        }
};

class City {
    Point location; // Nested class
    string name;
    int population;

    public: 
        City() : location(Point()), name("unkown"), population(0) {}
        City(const Point& location, const string& name, int population) 
            : location(location), name(name), population(population) {}
        
        const Point& getLocation() {return location;} // returning the memAddress but with read-only restriction!
        void setLocation(Point& location) { this->location = location; }

        string getName() { return name; }
        void setName(string name) { this->name = name; }

        int getPopulation() { return population; }
        void setPopulation(int population) { this->population = population; }
};

int main() { 
    XYZPoint p = XYZPoint(1, 2, 3);
    p.print();

    return 0;
}
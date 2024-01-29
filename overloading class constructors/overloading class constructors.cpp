#include <iostream> 
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() { // the default constructor
        x = 0; // initialization with zeros so that variables do not store garbage
        y = 0;
    }
    Point(int valueX, int valueY) { // constructor that I described
        x = valueX;
        y = valueY;
    }
    Point(int valueX, bool boolean) {
        x = valueX;
        (boolean) ? (y = 1) : (y = -1);
    }
    int  GetX() { // method receiving the x
        return x;
    }
    void SetX(int valueX) { // method that establishes the x
        x = valueX;
    }
    int  GetY() { // method receiving the y
        return y;
    }
    void SetY(int valueY) { // method that establishes the y
        y = valueY * 2;
    }
    void Print() { // method for displaying the values of x and y
        cout << "X = " << x << "\t Y = " << y << endl << endl;
    }
};

int main() {
    Point a; // the default constructor is called
    a.Print(); 

    Point b(4, 17);
    b.Print();

    Point c(22, true);
    c.Print();

    return 0;
}


#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    // Constructor with parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Function to calculate area
    int area() {
        return width * height;
    }
};

int main() {
    // Passing values to constructor
    Rectangle rect(10, 20);
    
    // Output the area
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}

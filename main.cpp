#include "Polygon.h"
using namespace std;

int main() {
    Triangle triangle(10, 5);
    Rectangle rectangle(5, 9);
    triangle.draw();
    cout<<"Area of Triangle: "<<triangle.getArea()<<endl;
    rectangle.draw();
    cout<<"Area of Rectangle: "<<rectangle.getArea()<<endl;
    triangle.setWidth(7);
    triangle.setHeight(7);
    rectangle.setWidth(7);
    rectangle.setHeight(12);
    triangle.draw();
    cout<<"New area of Triangle: "<<triangle.getArea()<<endl;
    rectangle.draw();
    cout<<"New area of Rectangle: "<<rectangle.getArea()<<endl;
    return 0;
}

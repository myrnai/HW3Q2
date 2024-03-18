#include "Polygon.h"
using namespace std;

Polygon::Polygon() {}
Polygon::Polygon(int newWidth, int newHeight) : width(newWidth), height(newHeight) {}
void Polygon::setWidth(int newWidth) {
    width = newWidth;
}
void Polygon::setHeight(int newHeight) {
    height = newHeight;
}
Rectangle::Rectangle() : Polygon() {}
Rectangle::Rectangle(int newWidth, int newHeight) : Polygon(newWidth, newHeight) {}
int Rectangle::getArea() const {
    return width * height;
}
void Rectangle::draw() const {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
}
Triangle::Triangle() : Polygon() {}
Triangle::Triangle(int newWidth, int newHeight) : Polygon(newWidth, newHeight) {}
int Triangle::getArea() const {
    return width * height / 2;
}
void Triangle::draw() const {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
}

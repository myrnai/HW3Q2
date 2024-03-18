#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
using namespace std;

class Polygon {
public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    virtual int getArea() const = 0;
    virtual void draw() const = 0;
protected:
    int width = 0;
    int height = 0;
};

class Rectangle : public Polygon {
public:
    Rectangle();
    Rectangle(int newWidth, int newHeight);
    int getArea() const override;
    void draw() const override;
};

class Triangle : public Polygon {
public:
    Triangle();
    Triangle(int newWidth, int newHeight);
    int getArea() const override;
    void draw() const override;
};

#endif

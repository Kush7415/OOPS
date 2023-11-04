// Q3.WAP to find out the area of rectangle , square , circle  using function overloading and constructor overloading

#include <iostream>
using namespace std;
#include <cmath>

class Shape
{
public:
    double area;

    Shape() : area(0.0) {}

    virtual void calculateArea() {}
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    void calculateArea() override
    {
        area = length * width;
    }
};

class Square : public Shape
{
private:
    double side;

public:
    Square(double s) : side(s) {}

    void calculateArea() override
    {
        area = side * side;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override
    {
        area = M_PI * radius * radius;
    }
};

int main()
{
    double length, width, side, radius;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);
    rectangle.calculateArea();
    cout << "Area of rectangle: " << rectangle.area << endl;

    cout << "Enter side length of square: ";
    cin >> side;
    Square square(side);
    square.calculateArea();
    cout << "Area of square: " << square.area << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    Circle circle(radius);
    circle.calculateArea();
    cout << "Area of circle: " << circle.area << endl;

    return 0;
}
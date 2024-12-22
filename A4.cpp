#include <iostream>
using namespace std;
class Shape {
public:
virtual void calculateArea() = 0;
virtual ~Shape() {}
};
class Circle : public Shape {
double radius;
public:
Circle(double r) : radius(r) {}
void calculateArea() override {
cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
}
};
class Rectangle : public Shape {
double length, breadth;
public:
Rectangle(double l, double b) : length(l), breadth(b) {}
void calculateArea() override {
cout << "Area of Rectangle: " << length * breadth << endl;
}
};
class Triangle : public Shape {
double base, height;
public:
Triangle(double b, double h) : base(b), height(h) {}
void calculateArea() override {
cout << "Area of Triangle: " << 0.5 * base * height << endl;
}
};
int main() {
Shape* shape;
int choice;
cout << "Choose a shape to calculate area:\n";
cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
cin >> choice;
switch (choice) {
case 1: {
double radius;
cout << "Enter radius of circle: ";
cin >> radius;
shape = new Circle(radius);
break;
}
case 2: {
double length, breadth;
cout << "Enter length and breadth of rectangle: ";
cin >> length >> breadth;
shape = new Rectangle(length, breadth);
break;
}
case 3: {
double base, height;
cout << "Enter base and height of triangle: ";
cin >> base >> height;
shape = new Triangle(base, height);
break;
}
default:
cout << "Invalid choice!" << endl;
return 1;
}
shape->calculateArea();
delete shape;
return 0;
}

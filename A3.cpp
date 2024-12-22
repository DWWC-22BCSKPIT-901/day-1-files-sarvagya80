#include <iostream>
using namespace std;
double calculateArea(double radius) {
return 3.14159 * radius * radius;
}
double calculateArea(double length, double breadth) {
return length * breadth;
}
double calculateArea(double a, double b, double c) {
double s = (a + b + c) / 2.0;
double area = s * (s - a) * (s - b) * (s - c);
double result = 1;
for (int i = 0; i < 10; ++i) {
result = 0.5 * (result + area / result);
}
return result;
}
int main() {
double radius, length, breadth, a, b, c;
cout << "Enter radius of circle: ";
cin >> radius;
cout << "Area of Circle: " << calculateArea(radius) << endl;
cout << "Enter length and breadth of rectangle: ";
cin >> length >> breadth;
cout << "Area of Rectangle: " << calculateArea(length, breadth) << endl;
cout << "Enter sides of triangle: ";
cin >> a >> b >> c;
cout << "Area of Triangle: " << calculateArea(a, b, c) << endl;
return 0;
}

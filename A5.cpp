#include <iostream>
#include <cmath>
using namespace std;
class Complex {
public:
double real, imag;
Complex(double r = 0, double i = 0) {
real = r;
imag = i;
}
Complex operator+(const Complex& c) const {
return Complex(real + c.real, imag + c.imag);
}
Complex operator*(const Complex& c) const {
return Complex(real * c.real - imag * c.imag,
real * c.imag + imag * c.real);
}
double magnitude() const {
return sqrt(real * real + imag * imag);
}
};
void display(const Complex& c) {
cout << c.real << " + " << c.imag << "i";
}
int main() {
int choice;
Complex c1, c2, result;
cout << "Select an operation:\n";
cout << "1. Addition\n";
cout << "2. Multiplication\n";
cout << "3. Magnitude\n";
cin >> choice;
switch (choice) {
case 1:
cout << "Enter the real and imaginary parts of the first complex number: ";
cin >> c1.real >> c1.imag;
cout << "Enter the real and imaginary parts of the second complex number: " ;
cin >> c2.real >> c2.imag;
result = c1 + c2;
cout << "Sum: ";
display(result);
break;
case 2:
cout << "Enter the real and imaginary parts of the first complex number: ";
cin >> c1.real >> c1.imag;
cout << "Enter the real and imaginary parts of the second complex number: ";
cin >> c2.real >> c2.imag;
result = c1 * c2;
cout << "Product: ";
display(result);
break;
case 3:
cout << "Enter the real and imaginary parts of the complex number: ";
cin >> c1.real >> c1.imag;
cout << "Magnitude: " << c1.magnitude() << endl;
break;
default:
cout << "Invalid choice.\n";
}
return 0;
}

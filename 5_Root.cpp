//  implement a program to find the roots of a quadratic equation.

#include <iostream>
#include <cmath>

using namespace std;
void findRootsOfQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout<< "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    if (a == 0) {
        double x=-c/b;
        cout<<"Linear equation.\nroot ="<<x<<"\n";
    }

    cout << "Quadratic equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    findRootsOfQuadraticEquation(a, b, c);

    return 0;
}
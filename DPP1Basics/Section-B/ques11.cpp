//Write a program to input the radius and print the area of the circle.(Use: `area = 3.14 * r * r`)

#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;

    double area = 3.14 * radius * radius;

    cout << "Area of the circle = " << area << endl;
    return 0;
}

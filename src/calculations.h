#include "iostream"

#define PI 3.14159

using namespace std;

class Calculations {
    public:
        static void area_of_circle();
        static void area_of_rectangle();
        static void area_of_triangle();
};


void Calculations::area_of_circle() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is: " << PI * radius * radius << endl;
}

void Calculations::area_of_rectangle() {
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "The area of the rectangle is: " << length * width << endl;
}

void Calculations::area_of_triangle() {
    float base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "The area of the triangle is: " << 0.5 * base * height << endl;
}
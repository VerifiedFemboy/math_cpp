#include "iostream"

#define PI 3.14159

using namespace std;

class Calculations {
    public:
        static void area_of_circle();
        static void area_of_rectangle();
        static void area_of_triangle();
        static void arithmetic_sequence();
        static void calcuate_percentage();
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

void Calculations::arithmetic_sequence() {
    int a, d, n;
    cout << "Enter the first term of the sequence: ";
    cin >> a;
    cout << "Enter the common difference of the sequence: ";
    cin >> d;
    cout << "Enter the number of terms in the sequence: ";
    cin >> n;
    cout << "The sum of the first " << n << " terms of the arithmetic sequence is: " << n * (2 * a + (n - 1) * d) / 2 << endl;
}

void Calculations::calcuate_percentage() {
    float percentage, number;
    cout << "Enter the percentage: ";
    cin >> percentage;
    cout << "Enter the number: ";
    cin >> number;
    cout << "The percentage of " << number << " is: " << (percentage / 100) * number << endl;
}
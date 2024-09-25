#include "iostream"

using namespace std;

#define PI 3.14159

double area(double radius)
{
    return PI * radius * radius;
}

int main(int argc, char const *argv[])
{
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "The area of the circle is: " << area(r) << endl;
    
    return 0;
}

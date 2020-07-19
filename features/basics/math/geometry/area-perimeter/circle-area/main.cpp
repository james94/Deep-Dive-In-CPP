#include <iostream>
using namespace std;

// Khan Academy Reference: Area of a circle
// url: https://www.khanacademy.org/math/basic-geo/basic-geo-area-and-perimeter#area-circumference-circle

// Find area of circle as float
void area(float r);

int main() {
    float r;
    cout << "Enter Radius";
    cin >> r;
    area(r);
    return 0;
}

void area(float r)
{
    // Finds area of circle
    float pi = 22/7.0;
    float result;
    result = pi * r * r;
    cout << result << endl;
}

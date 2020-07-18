#include <iostream>
using namespace std;
// Khan Academy Reference: Area of triangles
// Link: https://www.khanacademy.org/math/basic-geo/basic-geo-area-and-perimeter#area-triangle

// Find area of triangle as float
void area();

int main() {
    area();

    return 0;
}

void area()
{
  // Finds area of triangle
  int b = 7, h = 5;
  float area;
  area = 0.5*(float(b) * h); // uses typecasting to return float area
  cout << area;
}
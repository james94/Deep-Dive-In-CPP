#include <iostream>
#include <cmath>
using namespace std;

// Khan Academy Basic Geometry Ref: Distance formula
// url: https://www.khanacademy.org/math/basic-geo/basic-geometry-pythagorean-theorem/pythagorean-theorem-distance/v/distance-formula

/**
 * Find the distance between two points
 *
 * @param x1    x1 is the horizontal coordinate of the 1st point
 * @param y1    y1 is the vertical coordinate of the 1st point
 * @param x2    x2 is the horizontal coordinate of the 2nd point
 * @param y2    y2 is the vertical coordinate of the 2nd point
 * @return      distance between the two points
 */
float distance(int x1, int y1, int x2, int y2);

int main() {
    int x1 = 3, y1 = -4;
    int x2 = 6, y2 = 0;
    cout << "Distance between two points is " << distance(x1, y1, x2, y2) << endl;
    return 0;
}

float distance(int x1, int y1, int x2, int y2)
{
    float dist;

    dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    return dist;
}
#include <iostream>
using namespace std;

// Khan Academy Basic Geometry Ref: Cylinder volume & surface area
// url: https://www.khanacademy.org/math/basic-geo/basic-geo-volume-sa/volume-cones/v/cylinder-volume-and-surface-area

/**
 * Finds volume of a cylinder
 *
 * @param radius    radius of a cylinder
 * @param height    height of a cylinder
 * @return          volume of a cylinder
 */
float CylinderVolume(int radius, int height);

int main() {
    int height = 8, radius = 4;
    cout << "Volume of Cylinder is " << CylinderVolume(radius, height) << " cm^3" << endl;
    return 0;
}

float CylinderVolume(int radius, int height)
{
    float volume, pi = 3.1415;
    volume = pi*radius*radius*height;
    return volume;
}
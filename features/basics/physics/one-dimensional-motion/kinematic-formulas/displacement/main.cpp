#include <iostream>
using namespace std;

// Khan Academy Reference: What are the kinematic formulas?
// url: https://www.khanacademy.org/science/physics/one-dimensional-motion/kinematic-formulas/a/what-are-the-kinematic-formulas

// Solving for Displacement using the 4th kinematic formula
// 4th kinematic formula: vf^2 = vi^2 + 2*a*d
// d = (vf^2 - vi^2)/(2*a)

/**
 * Finds the displacement for the difference between the final velocity and initial velocity divided by double the
 * constant acceleration.
 *
 * @param vf        final velocity
 * @param vi        initial velocity
 * @param accel     constant acceleration
 * @return          displacement
 */
float displacement(int vf, int vi, int accel);

int main() {
    int vf = 40, vi = 10, accel = 3;

    cout << "Enter 3 no: vf, vi, accel";
    cin >> vf >> vi >> accel;

    cout << "Displacement is " << displacement(vf, vi, accel) << endl;
    return 0;
}

float displacement(int vf, int vi, int accel)
{
    return (vf*vf - vi*vi)/(2*accel);
}
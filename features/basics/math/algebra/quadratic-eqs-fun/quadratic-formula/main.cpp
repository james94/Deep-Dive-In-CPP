#include <iostream>
#include <cmath>
using namespace std;

// Khan Academy Reference: The quadratic formula
// url: https://www.khanacademy.org/math/algebra-home/alg-quadratics#alg-solving-quadratics-using-the-quadratic-formula

// Finding roots of a quadratic equation
float root(int a, int b, int c);

int main() {
    int a = 3, b = 12, c = 8;
    cout << root(a, b, c) << endl;
    return 0;
}

float root(int a, int b, int c)
{
    float root1;

    // root1 of the quadratic formula
    root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);

    return root1;
}
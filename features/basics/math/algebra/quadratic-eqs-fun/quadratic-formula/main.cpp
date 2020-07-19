#include <iostream>
#include <cmath>
using namespace std;

// Khan Academy Reference: The quadratic formula
// url: https://www.khanacademy.org/math/algebra-home/alg-quadratics#alg-solving-quadratics-using-the-quadratic-formula

// Finding roots of a quadratic equation
void root(int a, int b, int c);

int main() {
    int a = 3, b = 12, c = 8;
    cout << "Enter 3 values";
    cin >> a >> b >> c;
    root(a, b, c);
    return 0;
}

void root(int a, int b, int c)
{
    float root1, root2;

    // root1 of the quadratic formula
    root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

    cout << root1 << " " << root2 << endl;
}

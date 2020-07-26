#include<iostream>
#include<cmath>
using namespace std;

// Print Nature of Quadratic Roots equation and root
void Roots(float a,float b,float c);

int main() {
    float a, b, c;
    cout << "Enter 3 numbers";
    cin >> a >> b >> c;
    Roots(a, b, c);
    return 0;
}

void Roots(float a,float b,float c)
{
    float d,r1,r2;

    // calculate d
    // print nature of roots using nested if
    d = b*b - 4*a*c;
    if(d == 0)
    {
        r1 = -b/(2*a);
        cout << "real and equal " << r1;
    }
    else
    {
        if(d > 0)
        {
            r1 = (-b + sqrt(d))/(2*a);
            r2 = (-b - sqrt(d))/(2*a);
            cout << "real and unequal " << r1 << " " << r2;
        }
        else
        {
            cout << "imaginary";
        }
    }
}


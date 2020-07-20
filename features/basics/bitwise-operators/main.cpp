#include <iostream>
using namespace std;

// cppreference: Arithmetic operators
// url: https://en.cppreference.com/w/cpp/language/operator_arithmetic

// Bitwise Operators
// &, |, ^, <<, >>, ~

int main() {
    int x = 11, y = 5, z;
    z = x & y;
    cout << z << endl;

    y = 7;
    z = x & y;
    cout << z << endl;

    z = x | y;
    cout << z << endl;

    z = x ^ y;
    cout << z << endl;

    char x2 = 5, y2;
    y2 = x2 << 1;
    cout << (int)y2 << endl;

    x2 = 20;
    y2 = x2 >> 1;
    cout << (int)y2 << endl;

    y2 = x2 << 1;
    cout << (int)y2 << endl;

    x2 = 5;
    y2 = ~x2;// not of x2
    cout << (int)y2 << endl;
    return 0;
}

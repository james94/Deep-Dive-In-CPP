#include <iostream>
#include <climits>

using namespace std;

// Overflow for char and integer example

int main() {
    char x = 127; // char range: -128 to 127
    cout << (int)x << endl;

    // max value we can store in char is 127, so for overflow protection, the value will be changed from 128 to -128
    // so, the value changes from maximum value possible to minimum value possible
    x = 128;
    cout << (int)x << endl;

    // reset x to 127
    x = 127;
    // post increment x by 1, overflow protection will kick in and we'll get -128
    x++;
    cout << (int)x << endl;

    x = 130; // overflow protection results in -125
    cout << (int)x << endl;

    x = -128; // still give us -128
    x--; // overflow protection will kick in and give us 127
    cout << (int)x << endl;

    int y = INT_MAX; // give us max integer
    cout << (int)y << endl;

    // take y++ and overflow protection will kick in and give us the smallest integer value
    y++;
    cout << (int)y << endl;
    return 0;
}

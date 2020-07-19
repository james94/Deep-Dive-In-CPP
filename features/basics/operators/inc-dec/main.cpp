#include <iostream>
using namespace std;

// cplusplus ref: Operators
// url: http://www.cplusplus.com/doc/tutorial/operators/

// increment: ++
// pre increment: ++x
// post increment: x++

// decrement: --
// pre decrement: --x
// post increment: x--

int main() {
    int i = 5, j;

    j = i++; // i post increment

    cout << "Post increment: i = " << i << "; j = " << j << endl;

    // reset i to  5
    i = 5;
    j = ++i; // i pre increment

    cout << "Pre increment: i = " << i << "; j = " << j << endl;

    // reset i to  5
    i = 5;

    // you shouldn't use multiple increment decrement opperators in same var in an expression
    // warning you may get is "Multiple unsequenced modifications to 'i'
    // Expected: j = 24; i = 7
    // yet, expected result may not be the same for every compiler
    // for ex, the compiler on my machine evaluated j = 26; i = 7
    j = 2 * ++i + 2 * i++; // i first pre increment, second post increment
    cout << "Pre, then Post increment: i = " << i << "; j = " << j << endl;

    // reset i to  5
    i = 5;

    // Expected: j = 22; i = 7
    j = 2 * i++ + 2 * i++; // i first post increment, second post increment
    cout << "Post, then Post increment: i = " << i << "; j = " << j << endl;
    return 0;
}

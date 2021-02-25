#include <iostream>
using namespace std;

/**
Array Declarations and C++11 for loops for iteration
auto is used to automatically detect data type
*/

int main()
{
    int A[] = {2,4,6,8,10,12};

    for(int x: A)
        cout << x << " ";

    cout << endl;

    float B[] = {2.5f, 5.6f, 9, 8, 7};

    for(float x: B)
        cout << x << " ";

    cout << endl;

    char C[]= {'A', 66, 'C', 68};

    for(auto x: C)
        cout << x << " ";

    cout << endl;

    for(int x: C)
        cout << x << " ";

    cout << endl;

    return 0;
}
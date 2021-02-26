#include <iostream>
using namespace std;

/**
* Nested loops are useful for iterating a multidimensional array
* Program iterates over 3 rows and 3 columns printing (i, j) for each cell
*/

int main()
{
    for(int i = 1; i < 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    return 0;
}
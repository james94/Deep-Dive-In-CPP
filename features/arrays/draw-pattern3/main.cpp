#include <iostream>
using namespace std;

/**
*   Draw Pattern 2:
*
*   Draw Lower Rightside of Triangle with C++
*
*               C++
*           C++ C++
*       C++ C++ C++
*   C++ C++ C++ C++
*
*   Draw Upper Leftside of Triangle with Py
*
*   Py  Py  Py  Py
*   Py  Py  Py
*   Py  Py
*   Py
*
*/

int main()
{
    int n = 4;
    cout << "Drew Lower Rightside of Triangle with C++:" << endl << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i+j >= n-1)
            {
                cout << "C++ ";
            }
            else
            {
                cout << "    ";
            }
        }
        cout << endl;
    }

    cout << endl;

    cout << "Drew Upper Leftside of Triangle with Py:" << endl << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i+j > n-1)
            {
                cout << "  ";
            }
            else
            {
                cout << "Py ";
            }
        }
        cout << endl;
    }
    return 0;
}
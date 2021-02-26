#include <iostream>
using namespace std;

/**
*   Draw Pattern 2:
*
*   Draw Lower Triangle of i
*
*   i
*   i   i
*   i   i   i
*   i   i   i   i
*
*   Draw Upper Triangle of j
*
*   j   j   j   j
*       j   j   j   
*           j   j
*               j
*
*/

int main()
{
    cout << "Draw Lower Triangle of i:" << endl << endl;
    // Draw Lower Triangle of i
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i >= j)
            {
                cout << "i ";
            }
        }
        cout << endl;
    }

    cout << endl;

    cout << "Draw Upper Triangle of j:" << endl << endl;

    // Draw Upper Triangle of j
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i > j)
            {
                cout << "  ";
            }
            else
            {
                cout << "j ";
            }
        }
        cout << endl;
    }
    return 0;
}

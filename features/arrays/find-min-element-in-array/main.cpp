#include <iostream>
#include <climits>
using namespace std;

/**
* Find min element in array
*/

int main()
{
    int A[]={8,4,12,37,36,25,-2,10,15,25};
    int min = INT_MAX;

    for(int x: A)
    {
        if(x < min)
        {
            min = x;
        }
    }

    cout << "Minimum number is " << min << endl;

    return 0;
}

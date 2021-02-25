#include <iostream>
using namespace std;

/**
* Count the number of positive and negative numbers in array
*/

int main()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;
    
    // write a loop to count positive and negative numbers
    for(int x: A)
    {
        if(x > 0)
        {
            pcount++;
        }
        else if(x < 0)
        {
            ncount++;
        }
    }
    
    cout << "Number of positive numbers is " << pcount << endl;
    cout << "Number of negative numbers is " << ncount << endl;
    
    return 0;
}
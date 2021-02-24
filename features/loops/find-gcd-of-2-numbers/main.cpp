#include <iostream>
using namespace std;

// GCD of 30 and 21 is 3
int main()
{
    int m, n;

    cout << "Enter 2 numbers";
    cin >> m >> n;

    while(m != n)
    {
        if(m > n)
        {
            m = m - n;
        }
        else if(n > m)
        {
            n = n - m;
        }
    }
    cout << "GCD of 2 numbers is " << m;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, m, r, rev = 0;

    cout << "Enter n";
    cin >> n;
    m = n;

    while(n > 0)
    {
        r = n % 10; // returns remainder aka digit
        n = n / 10; // removes rightmost digit
        rev = rev * 10 + r; // storing reverse number a digit at a time
    }

    cout << "Reverse number is " << rev << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, m, r, rev = 0;

    cout << "Enter n";
    cin >> n;
    m = n;

    cout << "Number is " << n << endl;

    while(n > 0)
    {
        r = n % 10; // returns remainder aka digit
        n = n / 10; // removes rightmost digit
        rev = rev * 10 + r; // storing reverse number a digit at a time
    }

    // display each digit of a number as a word
    while(rev > 0)
    {
        r = rev % 10;  // returns remainder aka digit
        switch(r)
        {
            case 0:
                cout << "zero ";
                break;
            case 1:
                cout << "one ";
                break;
            case 2:
                cout << "two ";
                break;
            case 3:
                cout << "three ";
                break;
            case 4:
                cout << "four ";
                break;
            case 5:
                cout << "five ";
                break;
            case 6:
                cout << "six ";
                break;
            case 7:
                cout << "seven ";
                break;
            case 8:
                cout << "eight ";
                break;
            case 9:
                cout << "nine ";
                break;
            default:
                cout << "number not supported";
        }
        rev = rev / 10; // removes rightmost digit
        n = n * 10 + r; // storing reverse number a digit at a time
    }

    return 0;
}
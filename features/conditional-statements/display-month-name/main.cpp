#include <iostream>
using namespace std;

// Display month name for given month number
void MonthName(int m);

int main() {
    int month;
    cout << "Enter month number";
    cin >> month;
    MonthName(month);
    return 0;
}

void MonthName(int m)
{
    //display month name using elfe if ladder
    if(m == 1)
    {
        cout << "jan";
    }
    else if(m == 2)
    {
        cout << "feb";
    }
    else if(m == 3)
    {
        cout << "mar";
    }
    else if(m == 4)
    {
        cout << "apr";
    }
    else if(m == 5)
    {
        cout << "may";
    }
    else if(m == 6)
    {
        cout << "jun";
    }
    else if(m == 7)
    {
        cout << "jul";
    }
    else if(m == 8)
    {
        cout << "aug";
    }
    else if(m == 9)
    {
        cout << "sep";
    }
    else if(m == 10)
    {
        cout << "oct";
    }
    else if(m == 11)
    {
        cout << "nov";
    }
    else if(m == 12)
    {
        cout << "dec";
    }
    else
    {
        cout << "invalid month name";
    }
}
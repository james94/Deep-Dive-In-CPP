#include <iostream>
using namespace std;

void Working(int hour);

int main() {
    int hour;
    cout << "Enter hours";
    cin >> hour;
    Working(hour);
    return 0;
}

void Working(int hour)
{
    // Use compound conditional AND statement to check if one is working
    if(hour >= 9 && hour <= 18)
    {
        cout << "working";
    }
    else
    {
        cout << "leisure";
    }
}
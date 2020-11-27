#include <iostream>

using namespace std;

void IsLeapYear(int year)
{
    // check if century year is true
    if(year % 100 == 0)
    {
        // check if century year is divisible by 400 is true, then it is a leap year
        if(year % 400 == 0)
            cout << year << " is a century year and leap year.\n";
        else
            cout << year << " is not a leap year.\n";
    } // else if check if year is divisible by 4 is true, then it is a leap year
    else if(year % 4 == 0)
        cout << year << " is a leap year.\n";
    else
        cout << year << " is not a leap year.\n";
}

int main() {
    int year1 = 2012, year2 = 1971, year3 = 1600, year4 = 1800;
    IsLeapYear(year1);
    IsLeapYear(year2);
    IsLeapYear(year3);
    IsLeapYear(year4);
    return 0;
}

#include <iostream>
using namespace std;

// Display day name for given day number
void DayNameElseIfLadder(int day);

void DayNameSwitchCase(int day);

int main() {
    int day;
    cout << "Enter day number";
    cin >> day;
//    DayNameElseIfLadder(day);
    DayNameSwitchCase(day);
    return 0;
}

void DayNameElseIfLadder(int day)
{

    //Display day name in 3 letters using else if ladder
    if(day == 2)
    {
        cout << "mon";
    }
    else if(day == 3)
    {
        cout << "tue";
    }
    else if(day == 4)
    {
        cout << "wed";
    }
    else if(day == 5)
    {
        cout << "thu";
    }
    else if(day == 6)
    {
        cout << "fri";
    }
    else if(day == 7)
    {
        cout << "sat";
    }
    else if(day == 1)
    {
        cout << "sun";
    }
    else
    {
        cout << "invalid day";
    }
}

// Faster than else if ladder because switch case will look at the number
// passed into switch(num) and then jump directly to that case instead of
// checking each condition like else if ladder
void DayNameSwitchCase(int day)
{
    //Display day anem using switch
    switch(day)
    {
        case 1:
            cout << "sun";
            break;
        case 2:
            cout << "mon";
            break;
        case 3:
            cout << "tue";
            break;
        case 4:
            cout << "wed";
            break;
        case 5:
            cout << "thu";
            break;
        case 6:
            cout << "fri";
            break;
        case 7:
            cout << "sat";
            break;
        default:
            cout << "invalid day";
            break;
    }
}
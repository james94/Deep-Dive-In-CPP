#include <iostream>
using namespace std;

int main() {
    int roll;
    cout << "Enter your Roll number";
    cin >> roll;

    if(roll < 1)
    {
        cout << "Invalid Roll";
    } else
    {
        cout << "Valid Roll";
    }
    return 0;
}

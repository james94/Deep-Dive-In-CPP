#include <iostream>
using namespace std;

// Find the max of 3 numbers
void Max3(int a,int b,int c);

int main() {
    int a, b, c;
    cout << "Enter 3 numbers" << endl;
    cin >> a >> b >> c;
    Max3(a, b, c);
    return 0;
}

void Max3(int a,int b,int c)
{

    //write nested if statements to print maximum of 3 numbers
    if(a > b && a > c)
    {
        cout << a;
    }
    else
    {
        if(b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
}

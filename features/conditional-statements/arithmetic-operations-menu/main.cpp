#include <iostream>
using namespace std;

void ArithOpt(int x,int y, int choice);

int main() {
    cout << "Menu\n";
    cout << "1. Add\n" << "2. Sub\n" << "3. Mul\n" << "4. Div\n";

    int option;
    cout << "Enter your choice";
    cin >> option;
    int a, b;
    cout << "Enter 2 numbers";
    cin >> a >> b;
    ArithOpt(a, b, option);
    return 0;
}

void ArithOpt(int x,int y, int choice)
{
    // write switch statement to perform Arithmetic operations
    // depending on choice
    int c;
    switch(choice)
    {
        case 1:
            c = x+y;
            break;
        case 2:
            c = x-y;
            break;
        case 3:
            c = x*y;
            break;
        case 4:
            c = x/y;
            break;
    }
    cout << "Result is " << c;
}
